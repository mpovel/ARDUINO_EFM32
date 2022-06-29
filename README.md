# EFM32GENERIC
Generic implementation of Arduino for EFM32 boards using Silabs Gecko_SDK. 

## Installation - using Arduino IDE Board Support
1. add `https://jp112sdl.github.io/ARDUINO_EFM32/package_ARDUINO_EFM32_index.json` to additional board urls.
2. look for EFM32 boards
<img width="802" alt="Bildschirmfoto 2022-06-28 um 09 50 32" src="https://user-images.githubusercontent.com/18190139/176124070-10e42e1f-1ffa-46c7-828e-ffb2e9fc95dc.png">


## Installation - Developers
1. Download the latest version from [https://github.com/huaweiwx/ARDUINO_EFM32](https://github.com/huaweiwx/ARDUINO_EFM32)
2. Unzip it into [Arduino]/hardware folder (Arduino must be ver1.8.5 or newer).
3. Unzip hardware/tools/win/jlink502.rar to hardware/tools/win/jlink502 folder.
3. Install Arduino Zero or Arduino Sam from the board manager for the arm-none-eabi-gcc compiler.
4. Download the [GNU ARM Embedded Toolchain](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads).
   Recommended use GCC ver 5.4.1-2016q2.
