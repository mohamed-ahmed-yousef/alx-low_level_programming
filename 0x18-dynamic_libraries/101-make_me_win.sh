#!/bin/bash
wget  https://github.com/mohamedahmed-cloud/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libtest.so 
LD_PRELOAD="$PWD/libtest.so" ./gm 9 8 10 24 75 9
