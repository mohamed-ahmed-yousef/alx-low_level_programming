#!/bin/bash
gcc -fPIC -c mathOperation.c
gcc -shared -o 100-operations.so *.o