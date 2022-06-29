#!/bin/bash
rm -f package/*.tar.gz
tar czf package/efm32tools_win-2022.6.29.tar.gz tools/st_upload.bat tools/j_upload.bat
tar czf package/efm32tools_macosx-2022.6.29.tar.gz tools/st_upload.sh tools/j_upload.sh
tar czf package/efm32tools_linux64-2022.6.29.tar.gz tools/st_upload.sh tools/j_upload.sh
cd hardware/arm
tar czf ../../package/ARDUINO_EFM32-2022.6.29.tar.gz EFM32
cd ../../package
cp package_ARDUINO_EFM32_index.json.template package_ARDUINO_EFM32_index.json
sha256sum efm32tools_macosx-2022.6.29.tar.gz|awk {'print"                     \"checksum\" : \"SHA-256:"$1"\","'}|sed -e '/efm32tools_macosx-2022.6.29_sum/{r /dev/stdin' -e 'd;}' package_ARDUINO_EFM32_index.json > package_ARDUINO_EFM32_index.json.tmp; mv package_ARDUINO_EFM32_index.json.tmp package_ARDUINO_EFM32_index.json
sha256sum efm32tools_linux64-2022.6.29.tar.gz|awk {'print"                     \"checksum\" : \"SHA-256:"$1"\","'}|sed -e '/efm32tools_linux64-2022.6.29_sum/{r /dev/stdin' -e 'd;}' package_ARDUINO_EFM32_index.json > package_ARDUINO_EFM32_index.json.tmp; mv package_ARDUINO_EFM32_index.json.tmp package_ARDUINO_EFM32_index.json
sha256sum efm32tools_win-2022.6.29.tar.gz|awk {'print"                     \"checksum\" : \"SHA-256:"$1"\","'}|sed -e '/efm32tools_win-2022.6.29_sum/{r /dev/stdin' -e 'd;}' package_ARDUINO_EFM32_index.json > package_ARDUINO_EFM32_index.json.tmp; mv package_ARDUINO_EFM32_index.json.tmp package_ARDUINO_EFM32_index.json
sha256sum ARDUINO_EFM32-2022.6.29.tar.gz|awk {'print"                     \"checksum\" : \"SHA-256:"$1"\","'}|sed -e '/ARDUINO_EFM32-2022.6.29_SUM/{r /dev/stdin' -e 'd;}' package_ARDUINO_EFM32_index.json > package_ARDUINO_EFM32_index.json.tmp; mv package_ARDUINO_EFM32_index.json.tmp package_ARDUINO_EFM32_index.json
