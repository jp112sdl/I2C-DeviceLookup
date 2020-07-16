# I2C-DeviceLookup

### I2C Scanner with name resolution for Arduino based AVR

It is a modified solution based on the [ESP-Diagnostic-Tool](https://github.com/romkey/ESP-Diagnostic-Tool) that originally comes from the classic Arduino example [i2c_scanner](https://playground.arduino.cc/Main/I2cScanner/) sketch.<br/>

- device list is now **PROGMEM**-compatible to make it suitable for _"SRAM small-sized"_ AVR.
- the Shell-Script [conv_i2c_scanner_devices](https://github.com/jp112sdl/I2C-DeviceLookup/blob/master/conv_i2c_scanner_devices.sh) converts the [I2C Scanner C++](https://i2cdevices.org/devices) code to the **PROGMEM**-format 


The output may look like
```
Scanning...
I2C device found at address 0x27
  -> might be MCP23008(8-Bit I/O Expander with Serial Interface I2C GPIO expander)
  -> might be MCP23017(I2C GPIO expander)
done
```
