#!/bin/bash
wget -P /tmp https://github.com/tarik7099/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libnewdynamic.so
export LD_PRELOAD=/tmp/libnewdynamic.so
