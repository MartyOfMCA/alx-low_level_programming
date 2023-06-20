#!/bin/bash
wget https://github.com/MartyOfMCA/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libinject.so -P /tmp
export LD_PRELOAD=/tmp/libinject.so
