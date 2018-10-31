#!/bin/bash


Start()
{
  #python relay.py
  #python2 relay.py -p Test2
  #python2 relay.py -p Test3
  #python2 test1.py
}


Register()
{
  #systemctl enable relay
  #systemctl status -l relay

  update-rc.d relay defaults
  update-rc.d relay enable

  #/lib/systemd/systemd-sysv-install enable relay
}


case $1 in
    Register)   $1      "$2"  ;;
    *)          Start ;;
esac
