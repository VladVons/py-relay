#!/bin/bash -x
# Created: 28.09.2016
# Vladimir Vons, VladVons@gmail.com

Install()
{
  apt install i2c-tools
  apt install git-core
  apt install rsync
  apt install mailutils
  apt install bc
  apt install lsof
  apt install zip

  apt install libpython2.7 
  apt install python-prctl
  apt install python-smbus
  apt install python-mysqldb
  apt install python-crypto
  apt install python-ephem

  apt install python-pip --no-install-recommends
  pip install wheel
  pip install setuptools
}


Install_1()
{
  #pip search Flask

  # remove all
  pip freeze | xargs pip uninstall -y

  # update all
  pip freeze --local | grep -v '^\-e' | cut -d = -f 1 | xargs -n1 pip install -U

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


Relay() 
{
  apt-get install libpython2.7
  apt-get install python-pip --no-install-recommends --reinstall
  apt-get install python-dev
  apt-get install python-prctl
  apt-get install build-essential libcap-dev
  apt-get install python-mysqldb
  
  apt-get install python-smbus
  adduser linux i2c # allow non root user access

  pip install --upgrade pip
  pip install setuptools
  #pip install wheel
  #pip install prctl
  pip install Adafruit-BMP
  pip install Adafruit-ADS1x15
  pip install Adafruit_Python_DHT
  pip install minimalmodbus
  pip install yattag
  pip install apcaccess
  #pip install pycryptodome

  #ln -s /usr/lib/python2.7/dist-packages /usr/local/lib/python2.7/dist-packages
}


RaspiImg()
{
  #lsblk

  Img="/mnt/hdd/data1/share/public/image/raspberry/img/2018-11-13-raspbian-stretch-lite.img"
  Dev="/dev/sdb"
  dd bs=4M conv=fsync if=$Img of=$Dev
}

clear
case $1 in
    Install)        "$1"        "$2" "$3" ;;
    RaspiImg)       "$1"        "$2" "$3" ;;
esac

