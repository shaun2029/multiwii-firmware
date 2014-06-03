HH-HF-no-magnetometer
===============================

Firmware - GitHub mirror of the official SVN multiwii project
-- This is just my personal mirror of MultiWii, thanks to
   everyone that made MultiWii possible.
-- thanks to: Plüschi, Goebish, and Benedikt



Changes:
Mag hold without a magnetometer
-- renamed Headhold in GUI to differentiate
-- uses mostly default code, uses much of the current Mag
   code in IMU.cpp
-- enables Headfree mode to be used as well, to use uncomment
   define in config.h (new dev build feature, not mine)

Board define for the Hextronic Micro MWC
-- code will compile and fly, just choose a multicopter
   configuration at the top of config.h
-- tried to avoid setting optional defines
-- set by default in config.h

Compiled sketch size: 14,100 bytes
