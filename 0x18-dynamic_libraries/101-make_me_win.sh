#!/bin/bash
wget -P /tmp https://github.com/nandweza/alx-low_level_programming/blob/0x18-dynamic_libraries/libmyd.so
export LD_PRELOAD=/tmp/libmyd.so
