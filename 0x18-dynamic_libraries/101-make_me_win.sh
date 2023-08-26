#!/bin/bash
wget -P /inject/ https://raw.githubusercontent.com/mohamedahmed-cloud/alx-low_level_programming/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/inject/libtest.so