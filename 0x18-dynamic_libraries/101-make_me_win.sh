#!/bin/bash
gcc -shared -o mycode.so -fPIC test.c
export Ld_PRELOAD=./mycode.so:$LD_LIBARY_PATH
