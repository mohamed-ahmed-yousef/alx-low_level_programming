#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c 
ar -rc libname.a *.o
ranlib libname.a
# gcc main.c -L. -lname -o main