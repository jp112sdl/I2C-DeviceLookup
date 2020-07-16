#pragma once
#include "avr/pgmspace.h"

typedef struct i2c_device {
  const char* name;
  const char* function;
  const byte *addrs;
} i2c_device_t;

const char name0[] PROGMEM = "AD5243";const char function0[] PROGMEM = "Dual, 256-Position, I2 C-Compatible Digital Potentiometer";
const char name1[] PROGMEM = "AD5248";const char function1[] PROGMEM = "Dual, 256-Position, I2 C-Compatible Digital Potentiometer";
const char name2[] PROGMEM = "AD5251";const char function2[] PROGMEM = "Dual 64-Position I2 C Nonvolatile Memory Digital Potentiometers";
const char name3[] PROGMEM = "AD5252";const char function3[] PROGMEM = "Dual 256-Position I2C Nonvolatile Memory Digital Potentiometers";
const char name4[] PROGMEM = "ADS1115";const char function4[] PROGMEM = "4-channel 16-bit ADC";
const char name5[] PROGMEM = "ADXL345";const char function5[] PROGMEM = "3-axis accelerometer";
const char name6[] PROGMEM = "AK8975";const char function6[] PROGMEM = "3-axis magnetometer";
const char name7[] PROGMEM = "AM2315";const char function7[] PROGMEM = "Humidity/Temp sensor";
const char name8[] PROGMEM = "AMG8833";const char function8[] PROGMEM = "IR Thermal Camera Breakout";
const char name9[] PROGMEM = "APDS-9250";const char function9[] PROGMEM = "Digital RGB, IR and Ambient Light Sensor";
const char name10[] PROGMEM = "APDS-9960";const char function10[] PROGMEM = "IR/Color/Proximity Sensor";
const char name11[] PROGMEM = "AS7262";const char function11[] PROGMEM = "6-channel visible spectral_ID device with electronic shutter and smart interface";
const char name12[] PROGMEM = "BMA150";const char function12[] PROGMEM = "Digital triaxial acceleration sensor";
const char name13[] PROGMEM = "BMA180";const char function13[] PROGMEM = "Accelerometer";
const char name14[] PROGMEM = "BME280";const char function14[] PROGMEM = "Temp/Barometric/Humidity";
const char name15[] PROGMEM = "BME680";const char function15[] PROGMEM = "Low power gas, pressure, temperature &amp; humidity sensor";
const char name16[] PROGMEM = "BMP085";const char function16[] PROGMEM = "Temp/Barometric";
const char name17[] PROGMEM = "BMP180";const char function17[] PROGMEM = "Temp/Barometric";
const char name18[] PROGMEM = "BMP280";const char function18[] PROGMEM = "Temp/Barometric";
const char name19[] PROGMEM = "BNO055";const char function19[] PROGMEM = "Absolute Orientation Sensor";
const char name20[] PROGMEM = "CAP1188";const char function20[] PROGMEM = "8-channel Capacitive Touch";
const char name21[] PROGMEM = "CAT5171";const char function21[] PROGMEM = "256‐position I2C Compatible Digital Potentiometer ";
const char name22[] PROGMEM = "CCS811";const char function22[] PROGMEM = "Volatile organics (VOC) and equivalent CO2 (eCO2) sensor";
const char name23[] PROGMEM = "Chirp!";const char function23[] PROGMEM = "Water sensor";
const char name24[] PROGMEM = "DRV2605";const char function24[] PROGMEM = "Haptic Motor Driver";
const char name25[] PROGMEM = "DS1307";const char function25[] PROGMEM = "64 x 8 Serial Real-Time Clock";
const char name26[] PROGMEM = "DS3231";const char function26[] PROGMEM = "Extremely Accurate RTC/TCXO/Crystal";
const char name27[] PROGMEM = "FT6x06";const char function27[] PROGMEM = "Capacitive Touch Driver";
const char name28[] PROGMEM = "FXAS21002";const char function28[] PROGMEM = "3-axis gyroscope";
const char name29[] PROGMEM = "FXOS8700";const char function29[] PROGMEM = "6-axis sensor with integrated linear accelerometer and magnetometer";
const char name30[] PROGMEM = "HDC1008";const char function30[] PROGMEM = "Low Power, High Accuracy Digital Humidity Sensor with Temperature Sensor";
const char name31[] PROGMEM = "HMC5883";const char function31[] PROGMEM = "3-Axis Digital Compass/Magnetometer IC";
const char name32[] PROGMEM = "HT16K33";const char function32[] PROGMEM = "LED Matrix Driver";
const char name33[] PROGMEM = "HTS221";const char function33[] PROGMEM = "Capacitive digital sensor for relative humidity and temperature";
const char name34[] PROGMEM = "HTU21D-F";const char function34[] PROGMEM = "Humidity/Temp Sensor";
const char name35[] PROGMEM = "INA219";const char function35[] PROGMEM = "26V Bi-Directional High-Side Current/Power/Voltage Monitor";
const char name36[] PROGMEM = "INA260";const char function36[] PROGMEM = "Precision Digital Current and Power Monitor With Low-Drift, Precision Integrated Shunt";
const char name37[] PROGMEM = "IS31FL3731";const char function37[] PROGMEM = "144-LED Audio Modulated Matrix LED Driver (CharliePlex)";
const char name38[] PROGMEM = "ISL29125";const char function38[] PROGMEM = "Digital Red, Green and Blue Color Light Sensor with IR Blocking Filter";
const char name39[] PROGMEM = "IST-8310";const char function39[] PROGMEM = "Three-axis Magnetometer";
const char name40[] PROGMEM = "ITG3200";const char function40[] PROGMEM = "Gyro";
const char name41[] PROGMEM = "L3GD20H";const char function41[] PROGMEM = "gyroscope";
const char name42[] PROGMEM = "LIS3DH";const char function42[] PROGMEM = "3-axis accelerometer";
const char name43[] PROGMEM = "LSM303";const char function43[] PROGMEM = "Triple-axis Accelerometer+Magnetometer (Compass)";
const char name44[] PROGMEM = "LSM303";const char function44[] PROGMEM = "Triple-axis Accelerometer+Magnetometer (Compass)";
const char name45[] PROGMEM = "MAG3110";const char function45[] PROGMEM = "3-Axis Magnetometer";
const char name46[] PROGMEM = "MAX30101";const char function46[] PROGMEM = "High-Sensitivity Pulse Oximeter and Heart-Rate Sensor for Wearable Health";
const char name47[] PROGMEM = "MAX3010x";const char function47[] PROGMEM = "Pulse &amp; Oximetry sensor";
const char name48[] PROGMEM = "MAX44009";const char function48[] PROGMEM = "Ambient Light Sensor with ADC";
const char name49[] PROGMEM = "MB85RC";const char function49[] PROGMEM = "Ferroelectric RAM";
const char name50[] PROGMEM = "MCP23008";const char function50[] PROGMEM = "8-Bit I/O Expander with Serial Interface I2C GPIO expander";
const char name51[] PROGMEM = "MCP23017";const char function51[] PROGMEM = "I2C GPIO expander";
const char name52[] PROGMEM = "MCP4725A0";const char function52[] PROGMEM = "12-bit DAC";
const char name53[] PROGMEM = "MCP4725A1";const char function53[] PROGMEM = "12-Bit Digital-to-Analog Converter with EEPROM Memory";
const char name54[] PROGMEM = "MCP4725A2";const char function54[] PROGMEM = "12-Bit Digital-to-Analog Converter with EEPROM Memory";
const char name55[] PROGMEM = "MCP4725A3";const char function55[] PROGMEM = "12-Bit Digital-to-Analog Converter with EEPROM Memory";
const char name56[] PROGMEM = "MCP9808";const char function56[] PROGMEM = "±0.5°C Maximum Accuracy Digital Temperature Sensor";
const char name57[] PROGMEM = "MLX90614";const char function57[] PROGMEM = "IR temperature sensor";
const char name58[] PROGMEM = "MMA845x";const char function58[] PROGMEM = "3-axis, 14-bit/8-bit digital accelerometer";
const char name59[] PROGMEM = "MPL115A2";const char function59[] PROGMEM = "Miniature I2C digital barometer, 50 to 115 kPa";
const char name60[] PROGMEM = "MPL3115A2";const char function60[] PROGMEM = "Barometric Pressure";
const char name61[] PROGMEM = "MPR121";const char function61[] PROGMEM = "12-point capacitive touch sensor";
const char name62[] PROGMEM = "MPU6050";const char function62[] PROGMEM = "Six-Axis (Gyro + Accelerometer) MEMS MotionTracking™ Devices";
const char name63[] PROGMEM = "MPU-9250";const char function63[] PROGMEM = "9-DoF IMU Gyroscope, Accelerometer and Magnetometer";
const char name64[] PROGMEM = "MS5607";const char function64[] PROGMEM = "Barometric Pressure";
const char name65[] PROGMEM = "MS5611";const char function65[] PROGMEM = "Barometric Pressure";
const char name66[] PROGMEM = "NE5751";const char function66[] PROGMEM = "Audio processor for IV communication";
const char name67[] PROGMEM = "Nunchuck controller";const char function67[] PROGMEM = "Nintendo";
const char name68[] PROGMEM = "PCA1070";const char function68[] PROGMEM = "Multistandard programmable analog CMOS speech transmission IC";
const char name69[] PROGMEM = "PCA9685";const char function69[] PROGMEM = "16-channel PWM driver default address";
const char name70[] PROGMEM = "PCD3311C";const char function70[] PROGMEM = "DTMF/modem/musical tone generator";
const char name71[] PROGMEM = "PCD3312C";const char function71[] PROGMEM = "DTMF/modem/musical-tone generator";
const char name72[] PROGMEM = "PCF8523";const char function72[] PROGMEM = "RTC";
const char name73[] PROGMEM = "PCF8569";const char function73[] PROGMEM = "LCD column driver for dot matrix displays ";
const char name74[] PROGMEM = "PCF8573";const char function74[] PROGMEM = "Clock/calendar with Power Fail Detector";
const char name75[] PROGMEM = "PCF8577C";const char function75[] PROGMEM = "32/64-segment LCD display driver";
const char name76[] PROGMEM = "PCF8578";const char function76[] PROGMEM = "Row/column LCD dot matrix driver/display ";
const char name77[] PROGMEM = "PN532";const char function77[] PROGMEM = "NFC/RFID reader";
const char name78[] PROGMEM = "SAA1064";const char function78[] PROGMEM = "4-digit LED driver";
const char name79[] PROGMEM = "SAA2502";const char function79[] PROGMEM = "MPEG audio source decoder";
const char name80[] PROGMEM = "SAA4700";const char function80[] PROGMEM = "VPS Dataline Processor";
const char name81[] PROGMEM = "SAA5243P/E";const char function81[] PROGMEM = "Computer controlled teletext circuit ";
const char name82[] PROGMEM = "SAA5243P/H";const char function82[] PROGMEM = "Computer controlled teletext circuit ";
const char name83[] PROGMEM = "SAA5243P/K";const char function83[] PROGMEM = "Computer controlled teletext circuit ";
const char name84[] PROGMEM = "SAA5243P/L";const char function84[] PROGMEM = "Computer controlled teletext circuit ";
const char name85[] PROGMEM = "SAA5246";const char function85[] PROGMEM = "Integrated VIP and teletext";
const char name86[] PROGMEM = "SAB3035";const char function86[] PROGMEM = "Digital tuning circuit for computer-controlled TV ";
const char name87[] PROGMEM = "SAB3037";const char function87[] PROGMEM = "Digital tuning circuit for computer-controlled TV";
const char name88[] PROGMEM = "SGP30";const char function88[] PROGMEM = "Gas Sensor";
const char name89[] PROGMEM = "SH1106";const char function89[] PROGMEM = "132 X 64 Dot Matrix OLED/PLED Preliminary Segment/Common Driver with Controller";
const char name90[] PROGMEM = "SHT31";const char function90[] PROGMEM = "Humidity/Temp sensor";
const char name91[] PROGMEM = "Si1145";const char function91[] PROGMEM = "Proximity/UV/Ambient Light Sensor IC With I2C Interface";
const char name92[] PROGMEM = "Si4713";const char function92[] PROGMEM = "FM Radio Transmitter with Receive Power Scan";
const char name93[] PROGMEM = "Si5351A";const char function93[] PROGMEM = "Clock Generator";
const char name94[] PROGMEM = "Si7021";const char function94[] PROGMEM = "Humidity/Temp sensor";
const char name95[] PROGMEM = "SPS30";const char function95[] PROGMEM = "Particulate Matter Sensor for Air Quality Monitoring and Control";
const char name96[] PROGMEM = "SSD1305";const char function96[] PROGMEM = "132 x 64 Dot Matrix OLED/PLED Segment/Common Driver with Controller";
const char name97[] PROGMEM = "SSD1306";const char function97[] PROGMEM = "128 x 64 Dot Matrix Monochrome OLED/PLED Segment/Common Driver with Controller ";
const char name98[] PROGMEM = "STMPE610";const char function98[] PROGMEM = "Resistive Touch controller";
const char name99[] PROGMEM = "STMPE811";const char function99[] PROGMEM = "Resistive touchscreen controller";
const char name100[] PROGMEM = "TCA9548";const char function100[] PROGMEM = "1-to-8 I2C Multiplexer";
const char name101[] PROGMEM = "TCS34725";const char function101[] PROGMEM = "color sensor";
const char name102[] PROGMEM = "TDA4670";const char function102[] PROGMEM = "Picture signal improvement circuit";
const char name103[] PROGMEM = "TDA4671";const char function103[] PROGMEM = "Picture signal improvement circuit";
const char name104[] PROGMEM = "TDA4672";const char function104[] PROGMEM = "Picture signal improvement (PSI) circuit";
const char name105[] PROGMEM = "TDA4680";const char function105[] PROGMEM = "Video processor";
const char name106[] PROGMEM = "TDA4687";const char function106[] PROGMEM = "Video processor";
const char name107[] PROGMEM = "TDA4688";const char function107[] PROGMEM = "Video processor";
const char name108[] PROGMEM = "TDA4780";const char function108[] PROGMEM = "Video control with gamma control";
const char name109[] PROGMEM = "TDA8370";const char function109[] PROGMEM = "High/medium perf. sync. processor";
const char name110[] PROGMEM = "TDA8376";const char function110[] PROGMEM = "One-chip multistandard video";
const char name111[] PROGMEM = "TDA8415";const char function111[] PROGMEM = "TVNCR stereo/dual sound processor";
const char name112[] PROGMEM = "TDA8417";const char function112[] PROGMEM = "TVNCR stereo/dual sound processor";
const char name113[] PROGMEM = "TDA8421";const char function113[] PROGMEM = "Audio processor with loudspeaker and headphone channel ";
const char name114[] PROGMEM = "TDA8424";const char function114[] PROGMEM = "Audio processor with loudspeaker channel";
const char name115[] PROGMEM = "TDA8425";const char function115[] PROGMEM = "Audio processor with loudspeaker channel";
const char name116[] PROGMEM = "TDA8426";const char function116[] PROGMEM = "Hi-fi stereo audio processor";
const char name117[] PROGMEM = "TDA8442";const char function117[] PROGMEM = "Interface for colour decoder";
const char name118[] PROGMEM = "TDA9150";const char function118[] PROGMEM = "Deflection processor";
const char name119[] PROGMEM = "TDA9860";const char function119[] PROGMEM = "Hi-fi audio processor";
const char name120[] PROGMEM = "TEA5767";const char function120[] PROGMEM = "Radio receiver";
const char name121[] PROGMEM = "TEA6100";const char function121[] PROGMEM = "FM/IF for computer-controlled radio";
const char name122[] PROGMEM = "TEA6300";const char function122[] PROGMEM = "Sound fader control and preamplifier/source selector";
const char name123[] PROGMEM = "TEA6320";const char function123[] PROGMEM = "4-input tone/volume controller with fader control";
const char name124[] PROGMEM = "TEA6330";const char function124[] PROGMEM = "Sound fader control circuit for car radios";
const char name125[] PROGMEM = "TMP006";const char function125[] PROGMEM = "Infrared Thermopile Sensor in Chip-Scale Package";
const char name126[] PROGMEM = "TMP007";const char function126[] PROGMEM = "IR Temperature sensor";
const char name127[] PROGMEM = "TMP102";const char function127[] PROGMEM = "Temperature sensor";
const char name128[] PROGMEM = "TPA2016";const char function128[] PROGMEM = "2.8-W/Ch Stereo Class-D Audio Amplifier With Dynamic Range Compression and Automatic Gain Control";
const char name129[] PROGMEM = "TSA5511";const char function129[] PROGMEM = "1.3 GHz PLL frequency synthesizer for TV";
const char name130[] PROGMEM = "TSL2561";const char function130[] PROGMEM = "light sensor";
const char name131[] PROGMEM = "TSL2591";const char function131[] PROGMEM = "light sensor";
const char name132[] PROGMEM = "UMA1014T";const char function132[] PROGMEM = "Low-power frequency synthesizer for mobile radio communications";
const char name133[] PROGMEM = "VCNL40x0";const char function133[] PROGMEM = "proximity sensor";
const char name134[] PROGMEM = "VEML6070";const char function134[] PROGMEM = "UVA Light Sensor with I2C Interface";
const char name135[] PROGMEM = "VEML7700";const char function135[] PROGMEM = "High Accuracy Ambient Light Sensor ";
const char name136[] PROGMEM = "VL53L0x";const char function136[] PROGMEM = "Time Of Flight distance sensor";
const char name137[] PROGMEM = "VL6180X";const char function137[] PROGMEM = "Time Of Flight distance sensor";
const char name138[] PROGMEM = "VML6075";const char function138[] PROGMEM = "UVA and UVB Light Sensor with I2C Interface";

const i2c_device_t i2c_scanner_known_devices[] PROGMEM = {
  { name0, function0, (const byte *)"\x2f" },
  { name1, function1, (const byte *)"\x2c\x2d\x2e\x2f" },
  { name2, function2, (const byte *)"\x2c\x2d\x2e\x2f" },
  { name3, function3, (const byte *)"\x2c\x2d\x2e\x2f" },
  { name4, function4, (const byte *)"\x4a\x4b\x48\x49" },
  { name5, function5, (const byte *)"\x1d\x53" },
  { name6, function6, (const byte *)"\x0c\x0d\x0f\x0e" },
  { name7, function7, (const byte *)"\x5c" },
  { name8, function8, (const byte *)"\x68\x69" },
  { name9, function9, (const byte *)"\x52" },
  { name10, function10, (const byte *)"\x39" },
  { name11, function11, (const byte *)"\x49" },
  { name12, function12, (const byte *)"\x38" },
  { name13, function13, (const byte *)"\x77" },
  { name14, function14, (const byte *)"\x76\x77" },
  { name15, function15, (const byte *)"\x76\x77" },
  { name16, function16, (const byte *)"\x77" },
  { name17, function17, (const byte *)"\x77" },
  { name18, function18, (const byte *)"\x76\x77" },
  { name19, function19, (const byte *)"\x28\x29" },
  { name20, function20, (const byte *)"\x2c\x28\x2b\x2a\x2d\x29" },
  { name21, function21, (const byte *)"\x2c\x2d" },
  { name22, function22, (const byte *)"\x5a\x5b" },
  { name23, function23, (const byte *)"\x20" },
  { name24, function24, (const byte *)"\x5a" },
  { name25, function25, (const byte *)"\x68" },
  { name26, function26, (const byte *)"\x68" },
  { name27, function27, (const byte *)"\x38" },
  { name28, function28, (const byte *)"\x20\x21" },
  { name29, function29, (const byte *)"\x1d\x1f\x1e\x1c" },
  { name30, function30, (const byte *)"\x42\x43" },
  { name31, function31, (const byte *)"\x1e" },
  { name32, function32, (const byte *)"\x70\x71\x73\x76\x77\x75\x74\x72" },
  { name33, function33, (const byte *)"\x5f" },
  { name34, function34, (const byte *)"\x40" },
  { name35, function35, (const byte *)"\x42\x44\x47\x40\x43\x41\x46\x48\x4e\x4a\x45\x4c\x4d\x4f\x4b\x49" },
  { name36, function36, (const byte *)"\x42\x44\x47\x40\x43\x41\x46\x48\x4e\x4a\x45\x4c\x4d\x4f\x4b\x49" },
  { name37, function37, (const byte *)"\x66\x77" },
  { name38, function38, (const byte *)"\x44" },
  { name39, function39, (const byte *)"\x0e" },
  { name40, function40, (const byte *)"\x68\x69" },
  { name41, function41, (const byte *)"\x6a\x6b" },
  { name42, function42, (const byte *)"\x19\x18" },
  { name43, function43, (const byte *)"\x1e\x19" },
  { name44, function44, (const byte *)"\x1e\x18" },
  { name45, function45, (const byte *)"\x0e" },
  { name46, function46, (const byte *)"\x55" },
  { name47, function47, (const byte *)"\x57" },
  { name48, function48, (const byte *)"\x4a\x4b" },
  { name49, function49, (const byte *)"\x55\x52\x51\x53\x54\x50\x56\x57" },
  { name50, function50, (const byte *)"\x23\x22\x20\x25\x27\x26\x21\x24" },
  { name51, function51, (const byte *)"\x23\x22\x20\x25\x27\x26\x21\x24" },
  { name52, function52, (const byte *)"\x61\x60" },
  { name53, function53, (const byte *)"\x65\x67\x66\x62\x63\x64\x61\x60" },
  { name54, function54, (const byte *)"\x65\x64" },
  { name55, function55, (const byte *)"\x67\x66" },
  { name56, function56, (const byte *)"\x1d\x1b\x1f\x1e\x19\x1c\x18\x1a" },
  { name57, function57, (const byte *)"\x5a" },
  { name58, function58, (const byte *)"\x1d\x1c" },
  { name59, function59, (const byte *)"\x60" },
  { name60, function60, (const byte *)"\x60" },
  { name61, function61, (const byte *)"\x5a\x5c\x5b\x5d" },
  { name62, function62, (const byte *)"\x68\x69" },
  { name63, function63, (const byte *)"\x68\x69" },
  { name64, function64, (const byte *)"\x76\x77" },
  { name65, function65, (const byte *)"\x76\x77" },
  { name66, function66, (const byte *)"\x40\x41" },
  { name67, function67, (const byte *)"\x52" },
  { name68, function68, (const byte *)"\x22" },
  { name69, function69, (const byte *)"\x70\x65\x6f\x42\x44\x55\x47\x67\x40\x6a\x52\x68\x71\x43\x66\x6e\x62\x41\x46\x51\x69\x53\x5a\x73\x54\x63\x6b\x48\x7d\x7b\x6c\x76\x64\x77\x7e\x7c\x4e\x7f\x79\x7a\x4a\x78\x45\x61\x4c\x4d\x5c\x75\x4f\x50\x56\x5b\x4b\x6d\x57\x74\x72\x49\x60\x58\x59\x5e\x5f\x5d" },
  { name70, function70, (const byte *)"\x25\x24" },
  { name71, function71, (const byte *)"\x25\x24" },
  { name72, function72, (const byte *)"\x68" },
  { name73, function73, (const byte *)"\x3b\x3c" },
  { name74, function74, (const byte *)"\x6a\x68\x69\x6b" },
  { name75, function75, (const byte *)"\x3a" },
  { name76, function76, (const byte *)"\x3d\x3c" },
  { name77, function77, (const byte *)"\x48" },
  { name78, function78, (const byte *)"\x3b\x38\x3a\x39" },
  { name79, function79, (const byte *)"\x30\x31" },
  { name80, function80, (const byte *)"\x23\x21" },
  { name81, function81, (const byte *)"\x11" },
  { name82, function82, (const byte *)"\x11" },
  { name83, function83, (const byte *)"\x11" },
  { name84, function84, (const byte *)"\x11" },
  { name85, function85, (const byte *)"\x11" },
  { name86, function86, (const byte *)"\x62\x63\x61\x60" },
  { name87, function87, (const byte *)"\x62\x63\x61\x60" },
  { name88, function88, (const byte *)"\x58" },
  { name89, function89, (const byte *)"\x3d\x3c" },
  { name90, function90, (const byte *)"\x44\x45" },
  { name91, function91, (const byte *)"\x60" },
  { name92, function92, (const byte *)"\x63\x11" },
  { name93, function93, (const byte *)"\x61\x60" },
  { name94, function94, (const byte *)"\x40" },
  { name95, function95, (const byte *)"\x69" },
  { name96, function96, (const byte *)"\x3d\x3c" },
  { name97, function97, (const byte *)"\x3d\x3c" },
  { name98, function98, (const byte *)"\x44\x41" },
  { name99, function99, (const byte *)"\x44\x41" },
  { name100, function100, (const byte *)"\x70\x71\x73\x76\x77\x75\x74\x72" },
  { name101, function101, (const byte *)"\x29" },
  { name102, function102, (const byte *)"\x44" },
  { name103, function103, (const byte *)"\x44" },
  { name104, function104, (const byte *)"\x44" },
  { name105, function105, (const byte *)"\x44" },
  { name106, function106, (const byte *)"\x44" },
  { name107, function107, (const byte *)"\x44" },
  { name108, function108, (const byte *)"\x44" },
  { name109, function109, (const byte *)"\x46" },
  { name110, function110, (const byte *)"\x45" },
  { name111, function111, (const byte *)"\x42" },
  { name112, function112, (const byte *)"\x42" },
  { name113, function113, (const byte *)"\x40\x41" },
  { name114, function114, (const byte *)"\x41" },
  { name115, function115, (const byte *)"\x41" },
  { name116, function116, (const byte *)"\x41" },
  { name117, function117, (const byte *)"\x44" },
  { name118, function118, (const byte *)"\x46" },
  { name119, function119, (const byte *)"\x40\x41" },
  { name120, function120, (const byte *)"\x60" },
  { name121, function121, (const byte *)"\x61" },
  { name122, function122, (const byte *)"\x40" },
  { name123, function123, (const byte *)"\x40" },
  { name124, function124, (const byte *)"\x40" },
  { name125, function125, (const byte *)"\x42\x44\x47\x40\x43\x41\x46\x45" },
  { name126, function126, (const byte *)"\x42\x44\x47\x40\x43\x41\x46\x45" },
  { name127, function127, (const byte *)"\x48\x4a\x4b\x49" },
  { name128, function128, (const byte *)"\x58" },
  { name129, function129, (const byte *)"\x62\x63\x61\x60" },
  { name130, function130, (const byte *)"\x39\x49" },
  { name131, function131, (const byte *)"\x29" },
  { name132, function132, (const byte *)"\x62\x63" },
  { name133, function133, (const byte *)"\x13" },
  { name134, function134, (const byte *)"\x38\x39" },
  { name135, function135, (const byte *)"\x10" },
  { name136, function136, (const byte *)"\x29" },
  { name137, function137, (const byte *)"\x29" },
  { name138, function138, (const byte *)"\x10" },
};

int i2c_scanner_known_devices_length = sizeof(i2c_scanner_known_devices)/sizeof(i2c_device_t);
