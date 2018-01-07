#pragma once
#include "restclient-cpp/restclient.h"
#include <string.h>
#include <stdlib.h>

class ThumperControl{
    private:
      std::string url;
      std::string drive;
      std::string alarm;
      std::string rgb;
      void post(std::string url, std::string json);

    public:
      ThumperControl(std::string url);
      void setDrive(int left, int right);
      void setAlarm(std::string onoff);
      void setRGB(int red, int green, int blue);
};
