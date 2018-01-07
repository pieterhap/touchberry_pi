#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include "keys.h"
#include "thumpercontrol.h"

class TouchBerry{
private:
  Keys * keys;
  ThumperControl * thumper_control;
  static const int QT1070 = 0x1b;

public:
  TouchBerry(void);
  void start(void);
};
