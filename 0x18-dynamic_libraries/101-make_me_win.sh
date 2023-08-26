#!/bin/bash
wget   https://raw.githubusercontent.com/mohamedahmed-cloud/alx-low_level_programming/main/0x18-dynamic_libraries/libtest.so
LD_PRELOAD=libtest.so