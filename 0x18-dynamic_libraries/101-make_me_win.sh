#!/bin/bash
gcc *.o -fPIC -shared -o libdynamic.so
LD_PRELOAD=$WPD/libruin.so
