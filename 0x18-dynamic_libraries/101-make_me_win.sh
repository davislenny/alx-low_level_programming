#!/bin/bash
wget -P /tmp https://github.com/davislenny/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gigaprog.so 
export LD_PRELOAD=/tmp/gigaprog.so