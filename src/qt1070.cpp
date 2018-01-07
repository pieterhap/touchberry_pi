#include "lib/qt1070.h"

QT1070::QT1070(int address){
  i2c = new I2C(address);
}

char QT1070::getKeyStatus(void){
  char buffer[1];
  buffer[0] = 0x03;
  i2c->i2cWrite(buffer, 1);
  i2c->i2cRead(buffer, 1);
  return buffer[0];
}
