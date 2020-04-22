#!/bin/bash


ExecM()
{
  aExec="$1";

  echo
  echo "$FUNCNAME, $aExec"
  eval "$aExec"
}
  


Loop()
{
  for i in for i in {1..10}; do
    echo $i
    #wget $Host/api/sys/print --post-data '{"data":"Hello"}'
  done
}


Wget()
{
 echo
}


Hosts()
{
    aHosts=$1;
    wget="wget -qO-"

    for Host in $aHosts; do
        echo $Host

        $wget $Host
        #$wget $Host/sys/api1


        #$wget $Host/sys/log --post-data '{"msg":"Hello"}'
        #$wget $Host/sys/print --post-data '{"msg":"Hello"}'
        #$wget $Host/sys/uart --post-data '{"port":0, "data":"-hello-", "len":1}'
        #$wget $Host/sys/unget
        #$wget $Host/sys/w1scan --post-data '{"pin":14}'

        #$wget $Host/sys/flist --post-data '{"dir":"/MpyRelay"}'
        #$wget $Host/sys/fdel --post-data '{"files":["/MpyRelay/Api_*"]}'

        #$wget $Host/sys/exec --post-data '{"script":"import gc; result=gc.mem_free()"}'
        #$wget $Host/sys/exec --post-data '{"script":"2/0"}'

        #$wget $Host/sys/tail --post-data '{"file":"boot.py", "ofst":20000}'
        #$wget $Host/sys/tail --post-data '{"file":"AppConf.py", "ofst":20000}'

        #$wget $Host/sys/update --post-data '{"url":"http://192.168.22.11/relay/ver.json"}'
        #$wget $Host/sys/update --post-data '{"url":"http://download.oster.com.ua/www/relay/ver.json"}'
        #$wget $Host/sys/reset --timeout=1 --tries=1
        #$wget $Host/sys/exit


        $wget $Host/dev/dht22  --post-data '{"pin":14}'
        #$wget $Host/dev/bme280  --post-data '{}'
        #$wget $Host/dev/mq2  --post-data '{"pin":0}'
        #$wget $Host/dev/ds18b20 --post-data '{"pin":14}'
        #$wget $Host/dev/ds18b20 --post-data '{"pin":14, "id":["28ff176193160491"]}'
        #$wget $Host/dev/mhz19  --post-data '{"port":0}'
        #$wget $Host/dev/pzem   --post-data '{"value":["Voltage","Current"]}'

        #$wget $Host/gpio/write --post-data '{"12":"1"}'
        #$wget $Host/gpio/read --post-data '{"pin":[2,12,13,14]}'
    done
}


Once()
{
  #Hosts "http://192.168.2.131  http://192.168.2.133  http://192.168.2.143  http://192.168.2.144  http://192.168.2.149"
  Hosts "http://192.168.2.203"
  #Hosts "http://192.168.22.206"
  #Hosts "http://dh1.lan"


  #Hosts "http://192.168.2.131"
  #Hosts "http://192.168.2.143"
  #Hosts "http://192.168.2.133"
}


Loop()
{
  while true; do
    Hosts "http://192.168.2.240"
    echo
    echo
    sleep 1
  done
}

#Once
Loop
