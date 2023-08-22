#!/bin/bash
wget -P /tmp/ https://raw.github.com/kevkatam/alx-low_level_programming/main/0x18-dynamic_librarie/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
