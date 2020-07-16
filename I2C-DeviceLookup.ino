// 2020-07-16 jp112sdl Creative Commons - http://creativecommons.org/licenses/by-nc-sa/3.0/de/
// based on:
// https://playground.arduino.cc/Main/I2cScanner/
// https://i2cdevices.org
// https://github.com/romkey/ESP-Diagnostic-Tool

#include <Wire.h>
#include "I2C-DevDB.h"

void i2c_identify(byte address) {
  for (int i = 0; i < i2c_scanner_known_devices_length; i++) {
    i2c_device_t i2cDevice;
    memcpy_P (&i2cDevice, &i2c_scanner_known_devices [i], sizeof i2cDevice);
    int j = 0;
    while (i2cDevice.addrs[j] != '\0') {
      if (i2cDevice.addrs[j] == address) {
                       Serial.print("  -> might be ");
        /* Name:     */Serial.print((const __FlashStringHelper *)i2cDevice.name);
        /* Function: */Serial.print("("); Serial.print((const __FlashStringHelper *)i2cDevice.function); Serial.println(")");
        break;
      }
      j++;
    }
  }
}

void setup() {
  Serial.begin(57600);
  Wire.begin();

  byte error, address;
  int nDevices;

  Serial.println("Scanning...");

  nDevices = 0;
  for (address = 1; address < 127; address++ )  {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if (error == 0) {
      Serial.print("I2C device found at address 0x"); Serial.println(address, HEX);
      i2c_identify(address);
      nDevices++;
    } else if (error == 4) {
      Serial.print("Unknown error at address 0x"); Serial.println(address, HEX);
    }
  }

  if (nDevices == 0)
    Serial.println("No I2C devices found\n");
  else
    Serial.println("done\n");
}


void loop() {
}
