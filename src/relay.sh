#!/bin/bash
# VladVons@gmail.com


Start()
{
  #python relay.py
  #python2 relay.py -p Test2
  python2 relay.py -p Test3
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
