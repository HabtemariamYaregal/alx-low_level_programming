#!/bin/bash
gcc -Wall -Werror _wextra -std=gnu89 -c *.c
ar rc liball.a *.o
ranlib liball.a
