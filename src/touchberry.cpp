#include "lib/touchberry.h"

TouchBerry::TouchBerry(void){
  keys = new Keys(QT1070);
  thumper_control = new ThumperControl("http://192.168.0.235:3000");
}

void TouchBerry::start(void){
  while(true){
    int key = keys->getKeys();

    switch(key){
      case 1:
        thumper_control->setDrive(-150, 150);
      break;
      case 2:
        thumper_control->setDrive(150, -150);
      break;
      case 4:
        thumper_control->setDrive(150, 150);
      break;
      case 8:
        thumper_control->setDrive(-150, -150);
      break;
      case 16:
        thumper_control->setAlarm("on");
      break;
      case 32:
        thumper_control->setRGB(10, 10, 10);
      break;
      case 64:
        thumper_control->setRGB(255, 255, 255);
      break;
      default:
        thumper_control->setDrive(0, 0);
        thumper_control->setAlarm("off");
        thumper_control->setRGB(0, 0, 0);
    }

    usleep(50000);
  }
}
