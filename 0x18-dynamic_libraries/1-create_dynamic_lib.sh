#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -WL,-soname,liball.so -o liball.so *.o
