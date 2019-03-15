#!/bin/bash

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

Watch
