#!/bin/bash
gcc -f -fPic  *.c
gcc -shared *.o -o liball.so
