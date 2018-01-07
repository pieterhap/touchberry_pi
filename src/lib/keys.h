#pragma once
#include "qt1070.h"

class Keys{
private:
  QT1070 * qt1070;

public:
  Keys(int address);
  int getKeys(void);
};
