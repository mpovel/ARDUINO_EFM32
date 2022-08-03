#ifndef __SPICLASS_H__
#define __SPICLASS_H__

#include "spidrv.h"

#ifdef __cplusplus   /*add arduino style class lib  by huaweiwx@sinq.com 2018.9.*/
class SPISettings {
  public:
//#define SPI_MODE0
    SPISettings(uint32_t clock, uint8_t bitOrder, uint8_t dataMode): clock(clock), bitOrder(bitOrder), dataMode(dataMode) {};
    SPISettings(): clock(0), bitOrder(0), dataMode(0) {};
    //init(4000000, MSBFIRST, SPI_MODE0);

    uint32_t clock;
    uint8_t bitOrder;
    uint8_t dataMode;
};


class SPIClass {
private:
  SPIDRV_HandleData_t spidrvhandleData;
  SPIDRV_Handle_t spidrvHandle = &spidrvhandleData;
public:
  SPIClass()  {}
  virtual ~SPIClass () {}
  // Initialize the SPI library
  Ecode_t  begin( SPIDRV_Init_t *initData ){
       return SPIDRV_Init(spidrvHandle , initData);
  };
  Ecode_t end(){
     return SPIDRV_DeInit(spidrvHandle);
  };

  void beginTransaction(__attribute__((unused))  SPISettings settings) {
  }

  // Write to the SPI bus (MOSI pin) and also receive (MISO pin)
  inline uint8_t transfer(uint8_t data) {
    uint8_t ret;
    SPIDRV_MTransferSingleItemB(spidrvHandle, data, &ret);
    return ret;
  }
  inline static uint16_t transfer16(__attribute__((unused)) uint16_t data) { return 0;
  }
  inline static void transfer(__attribute__((unused)) void *buf, __attribute__((unused)) size_t count) {
  }
  // Write and read multiple bytes (blocking)
  inline void transfer(const void *bufTx, void *bufRx, size_t count) {
    SPIDRV_MTransferB(spidrvHandle, bufTx, bufRx, count);
  }
  // Read multiple bytes (blocking)
  inline void receive(void *bufRx, size_t count) {
    SPIDRV_MReceiveB(spidrvHandle, bufRx, count);
  }
  // Write multiple bytes (blocking)
  inline void transmit(const void *bufTx, size_t count) {
    SPIDRV_MTransmitB(spidrvHandle, bufTx, count);
  }
  // After performing a group of transfers and releasing the chip select
  // signal, this function allows others to access the SPI bus
  inline static void endTransaction(void) {
  }
  inline static void setBitOrder(__attribute__((unused)) uint8_t bitOrder) {
  }
  // This function is deprecated.  New applications should use
  // beginTransaction() to configure SPI settings.
  inline static void setDataMode(__attribute__((unused)) uint8_t dataMode) {
  }
  // This function is deprecated.  New applications should use
  // beginTransaction() to configure SPI settings.
  inline static void setClockDivider(__attribute__((unused))  uint8_t clockDiv) {
  }
  // These undocumented functions should not be used.  SPI.transfer()
  // polls the hardware flag which is automatically cleared as the
  // AVR responds to SPI's interrupt
  inline static void attachInterrupt() {}
  inline static void detachInterrupt() {}

private:

};

#include "SoftSPI.h"

extern SPIClass SPI;

#endif /*__cplusplus*/

#endif /* __SILICON_LABS_SPIDRV_H__ */
