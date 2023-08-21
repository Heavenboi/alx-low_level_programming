#!/bin/bash
gcc -wall -wextra -pedantic -c -fPIC *.c 
gcc -shared -o liblall.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBARRY_PATH
