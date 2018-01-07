#include "lib/keys.h"

Keys::Keys(int address){
  qt1070 = new QT1070(address);
}

int Keys::getKeys(void){
  return qt1070->getKeyStatus();
}
