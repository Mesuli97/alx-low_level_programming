#!/bin/bash

gcc -Wall -pedantic -Werror -Westra -c *.c
ar -rc liball.a *.o
ranlib liball.a
