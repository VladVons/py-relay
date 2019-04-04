#!/bin/bash
#--- VladVons@gmail.com. UA, 2018


LogDir="/var/log/py-relay"

Log()
{
    aMsg="$1";

    Msg="$(date +%Y-%m-%d-%a), $(date +%H:%M:%S), $(id -u -n), $aMsg"
    echo "--- $Msg"
    echo "$Msg" >> $LogDir/py-relay.sh.log
}

CheckShutdown()
{
    Pin=3
    echo "$Pin" > /sys/class/gpio/export
    echo "in" > /sys/class/gpio/gpio${Pin}/direction

    while true
    do
        sleep 1
        Data=$(cat /sys/class/gpio/gpio${Pin}/value)
        if [ $Data == "0" ]; then
            Msg="Got event to shutdown !"
            Log "$0->$1 $Msg"
            shutdown +0 "$Msg"
        fi
    done
}

TestI2C()
{
    aPin="$1"; 
    Adr=0x25
    Timeout=2

    Arr1[0]=254; Arr1[1]=253; Arr1[2]=251; Arr1[3]=247; Arr1[4]=239; Arr1[5]=223; Arr1[6]=191; Arr1[7]=127
    Arr0[0]=128; Arr0[1]=64;  Arr0[2]=32;  Arr0[3]=16;  Arr0[4]=8;   Arr0[5]=4;   Arr0[6]=2;   Arr0[7]=1

    while true
    do
        #Value=${Arr0[$aPin]}
        Value=255
        echo "Adr:$Adr, Pin:$aPin, Value:$Value"
        i2cset -y 1 $Adr $Value
        sleep $Timeout

        Value=${Arr1[$aPin]}
        echo "Adr:$Adr, Pin:$aPin, Value:$Value"
        i2cset -y 1 $Adr $Value
        sleep $Timeout
    done
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

    if [ $(uname -m) == "armv7l" ]; then 
        OnStart

        CheckShutdown &
        PID=$!
        echo "PID CheckShutdown: $PID"
    fi

    #./py-relay.bin
    python ./py-relay.py -p Default
    #python ./py-relay.py -p Client/Watch -i

    OnStart
    kill $PID >/dev/null 2>&1
}

Restart()
{
    Log "$0->$FUNCNAME"

    OnStart
    service py-relay restart
}

Reboot()
{
    Log "$0->$FUNCNAME"

    OnStart
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
case $1 in
    LogClear)  "$1" ;;
    Restart)   "$1" ;;
    Reboot)    "$1" ;;
    TestI2C)   "$1" ;;
    Start|*)   "Start" "$2" ;;
esac
