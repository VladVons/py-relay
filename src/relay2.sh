#!/bin/bash

Test1()
{
  #python2 relay.py -p Test3
  python2 relay.py -p Default
}

Test2()
{
  while true; do
    echo "hello"
    sleep 1
  done
}

#Test1
Test2
