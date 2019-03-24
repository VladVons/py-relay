#!/bin/bash
# VladVons@gmail.com

Start()
{
  #i2cset -y 1 0x25 255 # all off
  #i2cset -y 1 0x25 0 # all on

  #./py-relay.bin -p Hust1
  ./py-relay.bin -p Client/Watch
  #python ./py-relay.py -p Client/Watch -i

  #i2cset -y 1 0x25 255
}


Start
