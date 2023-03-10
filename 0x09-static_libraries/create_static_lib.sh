#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -crs liball.a *.o
