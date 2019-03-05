#!/bin/bash
# VladVons@gmail.com


ForceLog()
{
  echo ForceLog $(date +%Y-%m-%d-%a) >> /var/log/py-relay.log
}


Emulator()
{
  while true; do
    echo "hello"
    sleep 1
  done
}


Start()
{
  #ForceLog
  #Emulator

  #python py-relay.py
  python2 py-relay.py -p Test3
}


Register()
{
  #systemctl enable py-relay
  #systemctl status -l py-relay

  update-rc.d py-relay defaults
  update-rc.d py-relay enable

  #/lib/systemd/systemd-sysv-install enable py-relay
}


Watch()
{
    Bus=1
    Addr=0x25

    Cnt=0
    PrevVar=0
    while true
    do
        Var=$(i2cget -y $Bus $Addr)
        if [ $PrevVar != $Var ] ; then
            PrevVar=$Var
            Cnt=$((Cnt+1))
            VarHex=$(echo ${Var:2} | tr a-z A-Z)
            VarBin=$(echo "obase=2; ibase=16; $VarHex" | bc)
            #VarBin=10100100
            Time=$(date '+%H:%M:%S')
            printf "$Cnt $Time $VarHex %08d\n" $VarBin
        fi
        sleep 1
    done
}

case $1 in
    Register)   $1      "$2"  ;;
    Watch)      $1      "$2"  ;;
    *)          Start ;;
esac
