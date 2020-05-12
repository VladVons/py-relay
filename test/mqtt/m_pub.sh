#!/bin/bash

#http://www.steves-internet-guide.com/mosquitto_pub-sub-clients/

cHost="vpn2.oster.com.ua"
#cTopic="DraganivkaSen"
cTopic="tr24/sub"

Pub()
{
  Cnt=0
  while true; do
    echo

    ((Cnt++))

    Msg="{\"Path\": \"/get/dev/values\", \"Value\": $Cnt}"
    echo $Msg

    mosquitto_pub -h $cHost -t $cTopic -m "$Msg" -d
    sleep 3
  done
}

Pub
