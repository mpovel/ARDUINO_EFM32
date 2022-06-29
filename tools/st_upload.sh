#!/bin/bash
/usr/local/bin/openocd -f interface/stlink-dap.cfg -f target/efm32.cfg -c "program $1 verify reset exit"
