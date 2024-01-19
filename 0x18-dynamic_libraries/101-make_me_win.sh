#!bin/bash
wget -p .. https://raw.githubusercontent.com/Rita086.alx-low_level_programming/master/0x18-dynamic_libraries/libmutilate.so
export LD_PRELOAD="$PWD/../libmutilate.so"
