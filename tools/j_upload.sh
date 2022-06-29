#!/bin/bash
$1/bin/openocd -f interface/jlink.cfg -f target/efm32.cfg -c "program $2 verify reset exit"
