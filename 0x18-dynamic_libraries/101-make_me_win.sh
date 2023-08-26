#!/bin/bash
wget /tmp/ https://raw.githubusercontent.com/mohamedahmed-cloud/alx-low_level_programming/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so