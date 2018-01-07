#include "lib/touchberry.h"

int main(void)
{
  TouchBerry * touch_berry;
  touch_berry = new TouchBerry();

  touch_berry->start();
}
