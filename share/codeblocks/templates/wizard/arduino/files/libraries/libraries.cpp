#include <Arduino.h>

#if USE_ANDROID4IO
#include "Android4io.cpp"
#include "Android4ioDev.cpp"
#endif

#if USE_EEPROM
#include "EEPROM.cpp"
#endif

#if USE_ESPLORA
#include "Esplora.cpp"
#endif

#if USE_ETHERNET
#include "Ethernet.cpp"
#include "EthernetClient.cpp"
#include "EthernetServer.cpp"
#include "EthernetUdp.cpp"
#include "Dns.cpp"
#include "Dhcp.cpp"
#include "socket.cpp"
#include "w5100.cpp"
#endif

#if USE_FIRMATA
#include "Firmata.cpp"
#endif

#if USE_LIQUID_CRISTAL
#include "LiquidCrystal.cpp"
#endif

#if USE_SD
#include "SD.cpp"
#include "Sd2Card.cpp"
#include "SdFile.cpp"
#include "SdVolume.cpp"
#include "File.cpp"
#endif

#if USE_SERVO
#include "Servo.cpp"
#endif

#if USE_SOFTSERIAL
#include "SoftwareSerial.cpp"
#endif

#if USE_SPI
#include "SPI.cpp"
#endif

#if USE_STEPPER
#include "Stepper.cpp"
#endif

#if USE_USB_HOST20
#include "USB_HOST20.cpp"
#include "adk.cpp"
#include "BTD.cpp"
#include "cdcacm.cpp"
#include "cdcftdi.cpp"
#include "cdcprolific.cpp"
#include "hid.cpp"
#include "hidboot.cpp"
#include "hidescriptorparser.cpp"
#include "hiduniversal.cpp"
#include "hidusagetitlearrays.cpp"
#include "masstorage.cpp"
#include "max_LCD.cpp"
#include "message.cpp"
#include "parsetools.cpp"
#include "PS3BT.cpp"
#include "PS3USB.cpp"
#include "SPP.cpp"
#include "Usb.cpp"
#include "usbhub.cpp"
#include "Wii.cpp"
#include "XBOXUSB.cpp"
#endif

#if USE_WIFI
#include "WiFi.cpp"
#include "WiFiClient.cpp"
#include "WiFiServer.cpp"
#include "socket.cpp"
#include "server_drv.cpp"
#include "wifi_drv.cpp"
#include "spi_drv.cpp"
#endif

#if USE_WIRE
#include "Wire.cpp"
#include "twi.c"
#endif

