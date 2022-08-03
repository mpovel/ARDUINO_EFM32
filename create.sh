#!/bin/bash
rm -f package/2022.8.3.tar.gz
tar czf package/efm32tools_win-2022.8.3.tar.gz tools/st_upload.bat tools/j_upload.bat
tar czf package/efm32tools_macosx-2022.8.3.tar.gz tools/st_upload.sh tools/j_upload.sh
tar czf package/efm32tools_linux64-2022.8.3.tar.gz tools/st_upload.sh tools/j_upload.sh
cd hardware/arm
tar czf ../../package/ARDUINO_EFM32-2022.8.3.tar.gz EFM32
cd ../../package
#cp package_ARDUINO_EFM32_index.json.template package_ARDUINO_EFM32_index.json
#sha256sum efm32tools_macosx-2022.8.3.tar.gz|awk {'print"                     \"checksum\" : \"SHA-256:"$1"\","'}|sed -e '/efm32tools_macosx-2022.8.3_sum/{r /dev/stdin' -e 'd;}' package_ARDUINO_EFM32_index.json > package_ARDUINO_EFM32_index.json.tmp; mv package_ARDUINO_EFM32_index.json.tmp package_ARDUINO_EFM32_index.json
#sha256sum efm32tools_linux64-2022.8.3.tar.gz|awk {'print"                     \"checksum\" : \"SHA-256:"$1"\","'}|sed -e '/efm32tools_linux64-2022.8.3_sum/{r /dev/stdin' -e 'd;}' package_ARDUINO_EFM32_index.json > package_ARDUINO_EFM32_index.json.tmp; mv package_ARDUINO_EFM32_index.json.tmp package_ARDUINO_EFM32_index.json
#sha256sum efm32tools_win-2022.8.3.tar.gz|awk {'print"                     \"checksum\" : \"SHA-256:"$1"\","'}|sed -e '/efm32tools_win-2022.8.3_sum/{r /dev/stdin' -e 'd;}' package_ARDUINO_EFM32_index.json > package_ARDUINO_EFM32_index.json.tmp; mv package_ARDUINO_EFM32_index.json.tmp package_ARDUINO_EFM32_index.json
#sha256sum ARDUINO_EFM32-2022.8.3.tar.gz|awk {'print"                     \"checksum\" : \"SHA-256:"$1"\","'}|sed -e '/ARDUINO_EFM32-2022.8.3_SUM/{r /dev/stdin' -e 'd;}' package_ARDUINO_EFM32_index.json > package_ARDUINO_EFM32_index.json.tmp; mv package_ARDUINO_EFM32_index.json.tmp package_ARDUINO_EFM32_index.json
ls -la efm32tools_macosx-2022.8.3.tar.gz
ls -la efm32tools_linux64-2022.8.3.tar.gz
ls -la efm32tools_win-2022.8.3.tar.gz
ls -la ARDUINO_EFM32-2022.8.3.tar.gz
sha256sum efm32tools_macosx-2022.8.3.tar.gz
sha256sum efm32tools_linux64-2022.8.3.tar.gz
sha256sum efm32tools_win-2022.8.3.tar.gz
sha256sum ARDUINO_EFM32-2022.8.3.tar.gz
