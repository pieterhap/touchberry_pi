#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "i2c.h"


class QT1070{
private:
  I2C * i2c;

public:
  QT1070(int address);
  char getKeyStatus(void);
};
