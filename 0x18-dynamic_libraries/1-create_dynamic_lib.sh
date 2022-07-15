#!/bin/bash
gcc -g -fPIC -Wall -pedantic -Werror -Wextra  *.c -shared -o libdynamic.so
