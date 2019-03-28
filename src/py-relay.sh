#!/bin/bash
#--- VladVons@gmail.com

Log()
{
  aMsg="$1";
  LogFile="/var/log/py-relay/py-relay.sh.log"

  Msg="$(date +%Y-%m-%d-%a), $(date +%H:%M:%S), $(id -u -n), $aMsg"
  echo "--- $Msg"
  echo "$Msg" >> $LogFile
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
  shutdown --reboot +1 "monit serice reboot trigger $0->$FUNCNAME"
}


clear
OnStart

case $1 in
    Restart)   "$1" ;;
    Reboot)    "$1" ;;
    Start|*)   "Start" "$2" ;;
esac
