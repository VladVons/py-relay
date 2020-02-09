##!/bin/bash

##!/bin/bash -x

# Created: 28.09.2016
# Vladimir Vons, VladVons@gmail.com


Nuitka()
{
  #http://nuitka.net/pages/download.html

  #CODENAME=`lsb_release -c -s`
  #wget -O - http://nuitka.net/deb/archive.key.gpg | apt-key add -
  #echo > /etc/apt/sources.list.d/nuitka.list "deb http://nuitka.net/deb/stable/$CODENAME $CODENAME main"
  #apt-get update
  #apt-get install nuitka --no-install-recommends

  # we need nuitka for python 2.7
  pip install nuitka
echo "\
#!/usr/bin/python
# -*- coding: utf-8 -*-

import nuitka.__main__
nuitka.__main__.main()" > /usr/bin/nuitka
}


Install()
{
  apt install i2c-tools
  apt install git-core
  apt install rsync
  apt install mailutils
  apt install bc
  apt install lsof
  apt install zip
  apt install screen
  apt install sqlite
  apt install ntpdate

  #@ some package for app 
  apt install python-prctl
  apt install python-smbus
  apt install python-mysqldb
  apt install python-crypto
  apt install python-ephem
  apt install python-psutil

  ##  python minimal installer
  apt install libpython2.7 
  apt install python-pip --no-install-recommends
  pip install wheel
  pip install setuptools

  ## python binary compiler 
  Nuitka
  #pip install nuitka
  apt install python-dev
  #apt install libcap-dev
  #apt install build-essential

  ## for test connections
  apt install mysql-client --no-install-recommends

  #pip install apcaccess
  #pip install Adafruit-BMP
  #pip install Adafruit-ADS1x15
  #pip install Adafruit_Python_DHT
  #pip install minimalmodbus
 
  adduser pi i2c
}


Install_1()
{
  #pip search Flask

  # remove all
  pip freeze | xargs pip uninstall -y

  # update all
  #pip freeze --local | grep -v '^\-e' | cut -d = -f 1 | xargs -n1 pip install -U
  pip list --outdated | cut -d ' ' -f 1 | xargs -n 1 pip install --upgrade

  Installed=$(pip list | grep Flask)
  if [ ! "$Installed" ]; then
    apt-get install python-pip
    apt-get install python3-pip
    #
    pip3 install RPi.GPIO
    pip3 install pytest
    pip3 install devicehive
  fi

  #http://www.raspberry-projects.com/pi/software_utilities/email/ssmtp-to-send-emails
  apt-get install ssmtp mailutils

  #https://learn.adafruit.com/adafruits-raspberry-pi-lesson-4-gpio-setup/configuring-i2c
  #https://alselectro.wordpress.com/2016/05/12/serial-lcd-i2c-module-pcf8574/
  #apt-get install i2c-tools python3-smbus

  #devicehive
  #https://github.com/devicehive/devicehive-python/archive/2.1.2.zip
}


RaspiImg()
{
  ## 7 raspi
  ##https://github.com/RPi-Distro/pi-gen

  ## copy all data
  #dd if=/dev/sdb of=raspi.img bs=4M conv=notrunc,noerror

  ## copy only 1.7G data with 1M cache 
  #dd if=/dev/sdb of=raspi_1700M.img bs=1M count=1700 conv=noerror

  Dir="/mnt/hdd/data1/share/public/image/raspberry/img"
  Img="2018-11-13-raspbian-stretch-lite.img"
  Arc="raspbian-jessie-lite.zip"
  Dev="/dev/sdX"

  cd $Dir
  #wget https://downloads.raspberrypi.org/raspbian_lite_latest -O $Arc
  #unzip $Arc

  # mount dd image
  #losetup --partscan --find --show $Dir/$Img

  lsblk | grep "sd"

  echo "in most cases USB stick is /dev/sdb (not a dev/sdb1)"
  echo "do not use buffer bs=4M. Write direct. More stable"
  echo "dd conv=fsync if=$Dir/$Img of=$Dev"
  sync

  ## disable buffering for safe ?

  ## resize only 200M or comment to disable resizing
  ##/media/linux/rootfs/etc/init.d/resize2fs_once
  #resize2fs $ROOT_DEV 1800M &&

  #--- Boot Raspberry
  #user: pi
  #password: raspberry

  #--- configure raspberry
  #raspi-config
  #Menu->Advanced Options->SSH Enable/Disable

  # LCD display driver
  #https://github.com/goodtft/LCD-show
}

clear
case $1 in
    Install)        "$1"        "$2" "$3" ;;
    RaspiImg)       "$1"        "$2" "$3" ;;
esac

