Logitech LCD Plugin
===================
OBS plugin that adds Logitech Colour and Monochrome LCD support.

Plan is to upgrade to OBS studio api, add preview to color LCD.

Compiled using VS 2015

Build
=====
- Clone this git repo and put it inside `obs-studio\plugins\`
- Add this line`add_subdirectory(LogiLCD)` to `obs-studio\plugins\CMakeLists.txt`
- In Cmake
  - add an entry like this `LCDSDK_PATH` `"D:/LCDSDK_8.57.148/Lib/x64"`
  - Configure and Generate

Note: for now you still have to copy `LogitechLcd.dll` manually once ?

INSTALLATION
============
Put LogiLCD.dll into ../Program Files/OBS/plugins folder  
Put LogitechLcd.dll into ../Program Files/OBS folder  
or  
Put LogiLCD.dll into ../Program Files (x86)/OBS/64 bit/plugins folder  
Put LogitechLcd.dll into ../Program Files (x86)/OBS folder  
depending on installation and if you are using x64 or x32(x86) OS.  
