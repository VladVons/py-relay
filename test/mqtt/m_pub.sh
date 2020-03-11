#!/bin/bash

#http://www.steves-internet-guide.com/mosquitto_pub-sub-clients/

cHost="vpn2.oster.com.ua"
cTopic="MyTopic"
cMsg="m_pub.sh"

Pub()
{
  Cnt=0
  while true; do
    echo

    ((Cnt++))
    Msg="$cMsg $Cnt"
    echo $Msg
    mosquitto_pub -h $cHost -t $cTopic -m "$Msg" -d
    sleep 3
  done
}

Pub
