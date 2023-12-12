#!/bin/bash
wget -P .. https://github.com/princenzmw/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libfinal.so
wget -P . https://github.com/alx-tools/0x18.c/raw/master/gm
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
exec ./gm 9 8 10 24 75 9 "$@"
