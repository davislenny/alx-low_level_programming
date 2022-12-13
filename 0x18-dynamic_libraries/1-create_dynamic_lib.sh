#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared *.o -o liball.so
Export $LD_LIBRARY_PATH=.:LD_LIBRARY_PATH
