#!/bin/bash
wget -P . https://github.com/princenzmw/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libfinal.so
export LD_PRELOAD="$PWD/libfinal.so"
