#!/bin/bash
gcc -Wall -pedative -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
