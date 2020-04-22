#!/bin/bash

echo "vpn2.oster.com.ua 1883"
nc -vz vpn2.oster.com.ua 1883

echo "osguard.ddns.net 8899"
nc -vz osguard.ddns.net 8899

./AlarmHost.py
