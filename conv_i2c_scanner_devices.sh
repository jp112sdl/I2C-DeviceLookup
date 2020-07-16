#!/bin/bash
file="i2c_scanner_devices.original"
#curl -o $file https://i2cdevices.org/devices.cpp
counter=0
declare -a addr_array
echo "#pragma once"
echo "#include \"avr/pgmspace.h\""
echo ""
echo "typedef struct i2c_device {"
echo "  const char* name;"
echo "  const char* function;"
echo "  const byte *addrs;"
echo "} i2c_device_t;"
echo ""
while IFS=: read -r line; do
  VAR1=$(echo $line | awk -F\" '{print $2}')
  VAR2=$(echo $line | awk -F\" '{print $4}')
  VAR3=$(echo $line | awk -F\" '{print $6}')
  if [ -n "$VAR2" ]; then
    addr_array[$counter]=$VAR3
    echo "const char name$counter[] PROGMEM = \"$VAR1\";const char function$counter[] PROGMEM = \"$VAR2\";"
    let "counter++"
  fi
done <"$file"


echo ""
echo "const i2c_device_t i2c_scanner_known_devices[] PROGMEM = {"
for (( c=0; c<$counter; c++ ))
do
  echo "  { name$c, function$c, (const byte *)\"${addr_array[$c]}\" },"
done

echo "};"
echo ""

echo "int i2c_scanner_known_devices_length = sizeof(i2c_scanner_known_devices)/sizeof(i2c_device_t);"
