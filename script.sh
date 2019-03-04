#!/bin/bash

# Copyright:   (c) 2017, Vladimir Vons, UA
# Author:      Vladimir Vons <VladVons@gmail.com>
# Created:     09.11.2017
# License:     GNU, see LICENSE for more details
# Description:


Name="py-relay"
DirSrc="src"
#
Ver="1.0-16"
#Platform="armhf"
Platform="amd64"
DirDeb="deb/${Name}_${Ver}_${Platform}"

Log()
{
  aMsg="$1";

  Msg="$(date +%Y-%m-%d-%a), $(date +%H:%M:%S), $(id -u -n), $aMsg"
  echo "--- $Msg"
  echo "$Msg" >> $0.log
}


ExecM()
{
  aExec="$1"; aMsg="$2";

  echo
  Log "$FUNCNAME, $aExec, $aMsg"
  eval "$aExec"
}
 

Clean()
{
  echo "delete objects"
  find ./ \( -name "*.pyc" -o -name "*.log" -o -name "*.pyi" -o -name "*.db" \) -type f -delete
  #find ./ \( -name '*.so'  -o -name "*.exe" \) -type f -delete
  find . -name '__pycache__' -exec rm -v -f -R {} \;

  echo
  echo "Statistics *.py"
  #find . -name '*.py' -ls | awk '{total += $7} END {print total}'
  find . -name '*.py' | xargs wc

  #echo
  #echo "Statistics *.json"
  #find . -name '*.json' | xargs wc
}


Release()
{
  Log "$0->$FUNCNAME"

  #apt-get install python-dev 

  cd $DirSrc
  echo "Building..."
  #nuitka --exe --recurse-all --recurse-not-to=Plugin $Name.py
  #nuitka --exe --recurse-all --recurse-directory --recurse-not-to=Plugin --python-version=2.7 $Name.py
  nuitka --exe --recurse-all --include-plugin-directory --recurse-not-to=Plugin $Name.py
  cd ..

  find $DirSrc/Plugin -name "*.pyc" -type f -delete
}


BuildDeb()
{
  Log "$0->$FUNCNAME"

  Release="$DirSrc/py-relay.bin"
  if [ ! -x $Release ]; then
    echo "Release not compiled $Release"
    exit
  fi

  echo "remove old $DirDeb"
  rm -R $DirDeb $DirDeb.deb

  DirApp="$DirDeb/usr/lib/$Name"
  mkdir -p $DirApp

  cp -R deb/src/CONTENTS/* $DirDeb
  cp -R deb/src/DEBIAN $DirDeb
  cp -R $DirSrc/$Name.{bin,conf,key} $DirApp
  cp -R $DirSrc/Plugin $DirApp

  dpkg-deb --build $DirDeb
}


Install_pi_img()
{
  Log "$0->$FUNCNAME"

  #--- Download image.
  #https://www.raspberrypi.org/downloads/raspbian/
  wget https://downloads.raspberrypi.org/raspbian_lite_latest -O raspbian-jessie-lite.zip
  unzip raspbian-jessie-lite.zip

  #--- List usb disks
  df -h
  echo "in most cases USB stick is /dev/sdb. Not a dev/sdb1"
  echo "dd bs=4M conv=fsync if=2017-09-07-raspbian-stretch-lite.img of=/dev/sdX"
  sync

  #--- Boot Raspberry
  #user: pi
  #password: raspberry

  #--- configure raspberry
  raspi-config
  #Menu->Advanced Options->SSH Enable/Disable

}


Install_PkgMin()
{
  aPkg="$1";

  ExecM "apt-get install --yes --no-install-recommends $aPkg" 
}


Install_Pkg()
{
  Log "$0->$FUNCNAME"

  usermod pi -a -G spi,i2c,gpio,kmem,audio

  #apt-get update
  #apt-get dist-upgrade

  Install_PkgMin "mc"
  Install_PkgMin "python-pip python3-pip"
  Install_PkgMin "python-pip build-essential python-dev"
  Install_PkgMin "python-smbus"
  Install_PkgMin "i2c-tools"
  Install_PkgMin "sqlite"
  #Install_PkgMin "python-sqlite"
  #Install_PkgMin "python-mysqldb"
  Install_PkgMin "git"

  #Install_PkgMin apache2
  #Install_PkgMin ssmtp
  #Install_PkgMin mailutils
  #Install_PkgMin rsync

}

Install_Py()
{
  Log "$0->$FUNCNAME"

  python -V

  pip install wheel
  pip install RPi.GPIO
  pip install -U nuitka
  #pip install mysqlclient

  #HT22 (AM2302)
  File="Adafruit_Python_DHT"
  git clone https://github.com/adafruit/$File.git
  cd $File
  python setup.py install
  cd ..
  rm -R $File
}


Install_Locales()
{
  Log "$0->$FUNCNAME"

  Loc="en_US"
  #Loc="uk_UA"
  locale-gen ${Loc} ${Loc}.UTF-8
  update-locale LC_ALL=${Loc}.UTF-8 LANG=${Loc}.UTF-8
  ExecM "dpkg-reconfigure locales"

  ExecM "dpkg-reconfigure tzdata"
}


HowTo()
{
  # one wire on boot
  ExecM "grep w1-gpio /boot/config.txt"

  modprobe w1-gpio
  #after connecting to GPIO 4 there is a folder 28-*.
  ExecM "ls -1 /sys/bus/w1/devices/28-*/w1_slave"

  # one i2c on boot
  ExecM "grep i2c /boot/config.txt"

  # show i2c devices
  i2cdetect -y 1
  i2cset -y 1 0x25 0    # relay all on
  i2cset -y 1 0x25 255  # relay all off
  watch i2cget -y 1 0x25
  #printf '%08d\n' $( echo "obase=2; ibase=16; F" | bc)
  
  # i2c DS3231 clock
  #ExecM "cat /etc/rc.local"
  ExecM "/sys/class/i2c-adapter/i2c-1/new_device"
  #ds3231 0x68 >> /sys/class/i2c-adapter/i2c-1/new_device
  #hwclock -s
}


Install()
{
  Log "$0->$FUNCNAME"

  if [ "$(id -u)" != "0" ]; then
    echo "root privilege required"
    exit 1
  fi

  #Install_Locales
  Install_Pkg
  #Install_Py
  #HowTo
  #Install_Nutika
}


Wget()
{
  #???
  Url="https://api.telegram.org/bot482131719:AAHRZnIq-RsfNyF2LvaSIm028vGHgSv60dI/sendMessage"
  Post='{"text": "Hello-3", "chat_id": "423099610"}'
  echo "$Url, $Post"
  wget -qO- "$Url" --post-data $Post
}


Help()
{
  Log "$0->$FUNCNAME"

  echo "Usage: $0 [option]"
  echo "options:"
  echo "  Help    -> this help"
  echo "  Install -> install required packages"
  echo "  Release -> build executable application"
}


clear
#BuildDeb
#Wget
case $1 in
    Clean)          "$1"        "$2" "$3" ;;
    HowTo)          "$1"        "$2" "$3" ;;
    Release)        "$1"        "$2" "$3" ;;
    BuildDeb)       "$1"        "$2" "$3" ;;
    Install)        "$1"        "$2" "$3" ;;
    Install_Pkg)    "$1"        "$2" "$3" ;;
    Help|*)         "Help"       ;;
esac
