#!/bin/bash
#--- VladVons@gmail.com

LogDir="/var/log/py-relay"

Log()
{
  aMsg="$1";

  Msg="$(date +%Y-%m-%d-%a), $(date +%H:%M:%S), $(id -u -n), $aMsg"
  echo "--- $Msg"
  echo "$Msg" >> $LogDir/py-relay.sh.log
}

OnStart()
{
  echo "set all channels off"
  i2cset -y 1 0x25 255
}

Start()
{
  Log "$0->$FUNCNAME"

  #./py-relay.bin
  python ./py-relay.py -p Default
  #python ./py-relay.py -p Client/Watch -i

  OnStart
}

Restart()
{
  Log "$0->$FUNCNAME"
  service py-relay restart
}

Reboot()
{
  Log "$0->$FUNCNAME"
  shutdown --reboot +1 "monit serice REBOOT trigger! $0->$FUNCNAME"
}


LogClear()
{
  Log "$0->$FUNCNAME"

  find $LogDir | \
  while read File; do 
    echo > $File
  done
}




clear
OnStart

case $1 in
    LogClear)  "$1" ;;
    Restart)   "$1" ;;
    Reboot)    "$1" ;;
    Start|*)   "Start" "$2" ;;
esac
