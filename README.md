# Debounced_2_Button_Menu_Template

this simple menu system using debounce lib from wkoch which you can access from : https://github.com/wkoch/Debounce
this system also using interrupt on pin 2 and 3, as a display using I2C LCD.
compiled on PlatformIO with Arduino Uno board compiler.


======================================================
📦Debounced_2_Button_Menu_Template
 ┣ 📂.pio
 ┃ ┣ 📂build
 ┃ ┃ ┣ 📂uno
 ┃ ┃ ┃ ┣ 📂FrameworkArduino
 ┃ ┃ ┃ ┃ ┣ 📜abi.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜CDC.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜HardwareSerial.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜HardwareSerial0.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜HardwareSerial1.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜HardwareSerial2.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜HardwareSerial3.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜hooks.c.o
 ┃ ┃ ┃ ┃ ┣ 📜IPAddress.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜main.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜new.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜PluggableUSB.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜Print.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜Stream.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜Tone.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜USBCore.cpp.o
 ┃ ┃ ┃ ┃ ┣ 📜WInterrupts.c.o
 ┃ ┃ ┃ ┃ ┣ 📜wiring.c.o
 ┃ ┃ ┃ ┃ ┣ 📜wiring_analog.c.o
 ┃ ┃ ┃ ┃ ┣ 📜wiring_digital.c.o
 ┃ ┃ ┃ ┃ ┣ 📜wiring_pulse.c.o
 ┃ ┃ ┃ ┃ ┣ 📜wiring_pulse.S.o
 ┃ ┃ ┃ ┃ ┣ 📜wiring_shift.c.o
 ┃ ┃ ┃ ┃ ┣ 📜WMath.cpp.o
 ┃ ┃ ┃ ┃ ┗ 📜WString.cpp.o
 ┃ ┃ ┃ ┣ 📂lib1c6
 ┃ ┃ ┃ ┃ ┣ 📂Wire
 ┃ ┃ ┃ ┃ ┃ ┣ 📂utility
 ┃ ┃ ┃ ┃ ┃ ┃ ┗ 📜twi.c.o
 ┃ ┃ ┃ ┃ ┃ ┗ 📜Wire.cpp.o
 ┃ ┃ ┃ ┃ ┗ 📜libWire.a
 ┃ ┃ ┃ ┣ 📂lib358
 ┃ ┃ ┃ ┃ ┣ 📂LiquidCrystal_I2C
 ┃ ┃ ┃ ┃ ┃ ┗ 📜LiquidCrystal_I2C.cpp.o
 ┃ ┃ ┃ ┃ ┗ 📜libLiquidCrystal_I2C.a
 ┃ ┃ ┃ ┣ 📂libac4
 ┃ ┃ ┃ ┃ ┣ 📂Debounce-master
 ┃ ┃ ┃ ┃ ┃ ┗ 📜Debounce.cpp.o
 ┃ ┃ ┃ ┃ ┗ 📜libDebounce-master.a
 ┃ ┃ ┃ ┣ 📂src
 ┃ ┃ ┃ ┃ ┗ 📜main.cpp.o
 ┃ ┃ ┃ ┣ 📜.sconsign38.dblite
 ┃ ┃ ┃ ┣ 📜firmware.elf
 ┃ ┃ ┃ ┣ 📜firmware.hex
 ┃ ┃ ┃ ┣ 📜idedata.json
 ┃ ┃ ┃ ┣ 📜libFrameworkArduino.a
 ┃ ┃ ┃ ┗ 📜libFrameworkArduinoVariant.a
 ┃ ┃ ┗ 📜project.checksum
 ┃ ┗ 📂libdeps
 ┃ ┃ ┗ 📂uno
 ┃ ┃ ┃ ┗ 📂LiquidCrystal_I2C
 ┃ ┃ ┃ ┃ ┣ 📂examples
 ┃ ┃ ┃ ┃ ┃ ┣ 📂CustomChars
 ┃ ┃ ┃ ┃ ┃ ┃ ┗ 📜CustomChars.pde
 ┃ ┃ ┃ ┃ ┃ ┣ 📂HelloWorld
 ┃ ┃ ┃ ┃ ┃ ┃ ┗ 📜HelloWorld.pde
 ┃ ┃ ┃ ┃ ┃ ┗ 📂SerialDisplay
 ┃ ┃ ┃ ┃ ┃ ┃ ┗ 📜SerialDisplay.pde
 ┃ ┃ ┃ ┃ ┣ 📜.piopm
 ┃ ┃ ┃ ┃ ┣ 📜keywords.txt
 ┃ ┃ ┃ ┃ ┣ 📜library.json
 ┃ ┃ ┃ ┃ ┣ 📜library.properties
 ┃ ┃ ┃ ┃ ┣ 📜LiquidCrystal_I2C.cpp
 ┃ ┃ ┃ ┃ ┣ 📜LiquidCrystal_I2C.h
 ┃ ┃ ┃ ┃ ┗ 📜README.md
 ┣ 📂.vscode
 ┃ ┣ 📜c_cpp_properties.json
 ┃ ┣ 📜extensions.json
 ┃ ┗ 📜launch.json
 ┣ 📂include
 ┃ ┗ 📜README
 ┣ 📂lib
 ┃ ┣ 📂Debounce-master
 ┃ ┃ ┣ 📂examples
 ┃ ┃ ┃ ┣ 📂OneButtonOneLed
 ┃ ┃ ┃ ┃ ┗ 📜OneButtonOneLed.ino
 ┃ ┃ ┃ ┣ 📂OneButtonTwoLeds
 ┃ ┃ ┃ ┃ ┗ 📜OneButtonTwoLeds.ino
 ┃ ┃ ┃ ┣ 📂OnOffEveryTwoPresses
 ┃ ┃ ┃ ┃ ┗ 📜OnOffEveryTwoPresses.ino
 ┃ ┃ ┃ ┗ 📂TwoButtonsTwoLeds
 ┃ ┃ ┃ ┃ ┗ 📜TwoButtonsTwoLeds.ino
 ┃ ┃ ┣ 📜.gitignore
 ┃ ┃ ┣ 📜Debounce.cpp
 ┃ ┃ ┣ 📜Debounce.h
 ┃ ┃ ┣ 📜keywords.txt
 ┃ ┃ ┣ 📜library.json
 ┃ ┃ ┣ 📜LICENSE
 ┃ ┃ ┗ 📜README.md
 ┃ ┗ 📜README
 ┣ 📂src
 ┃ ┗ 📜main.cpp
 ┣ 📂test
 ┃ ┗ 📜README
 ┣ 📜.gitignore
 ┗ 📜platformio.ini
