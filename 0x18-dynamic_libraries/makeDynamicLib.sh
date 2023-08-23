#!/bin/bash
gcc -c -fPIC *.c # to Generate object file.
gcc -shared -o libdynamic.so *.o # but all .o in one and -o to specific the name.

