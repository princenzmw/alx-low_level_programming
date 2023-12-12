#!/bin/bash
wget -P .. https://raw.githubusercontent.com/princenzmw/alx-low_level_programming/main/0x18-dynamic_libraries/libfinal.so
export LD_PRELOAD="$PWD/libfinal.so"
