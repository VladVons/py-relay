#!/bin/bash

# http://www.steves-internet-guide.com/mosquitto_pub-sub-clients/
# apt-get install mosquitto-clients

cHost="vpn2.oster.com.ua"
#cTopic="DraganivkaSen"
cTopic="tr24"

mosquitto_sub -h $cHost -t $cTopic -d -v 
