#!/bin/bash
gcc  -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c mathOperation.c
gcc -shared -o 100-operations.so *.o