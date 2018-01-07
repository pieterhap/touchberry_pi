#pragma once
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <iostream>
#include <cstdio>

class I2C{
  private:
    int address;
    std::string filename;
    int file;

  public:
    I2C(int address);
    bool i2cWrite(char buffer[], int length);
    bool i2cRead(char buffer[], int length);
};
