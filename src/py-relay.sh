#!/bin/bash
#--- VladVons@gmail.com. UA, 2018


cApp="py-relay"

#cAppRun="./$cApp.bin -p Default"
#cAppRun="python ./$cApp.py -p Default"
cAppRun="python ./$cApp.py -p Client/Miskovichi1"


Log()
{
    aMsg="$1";
    cLogDir="/var/log/$cApp"

    Msg="$(date +%Y-%m-%d-%a), $(date +%H:%M:%S), $(id -u -n), $aMsg"
    echo "--- $Msg"
    echo "$Msg" >> $cLogDir/$cApp.sh.log
}


OnStart()
{
    echo "set all channels off"
    #i2cdetect -y 1
    i2cset -y 1 0x25 255
}


Start()
{
    Log "$0->$FUNCNAME"

    # allow only one instance
    (
        echo "Check running ..."
        flock -x -w 5 200
        if [ $? -eq 0 ]; then
            OnStart
            $cAppRun
            OnStart
        else
            Log "Already running $cApp"
        fi;
    )200> /var/lock/$cApp
    
}


Restart()
{
    Log "$0->$FUNCNAME, $1"

    OnStart
    service $cApp restart
}


Reboot()
{
    Log "$0->$FUNCNAME, $1"

    OnStart

    shutdown --reboot +1 "monit serice REBOOT trigger! $0->$FUNCNAME"
    #shutdown -c
}


#dont use 'clear' when callin from cron or other external process caller 
#TERM environment variable not set
#clear

case $1 in
    Restart)    "$1" "$2" "$4" ;;
    Reboot)     "$1" "$2" "$5" ;;
    Start|*)    "Start" "$2" ;;
esac
