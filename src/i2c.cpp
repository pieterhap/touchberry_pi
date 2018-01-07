#include "lib/i2c.h"

I2C::I2C(int address){
  this->address = address;
  this->filename = "/dev/i2c-1";
  this->file = open(this->filename.c_str(),O_RDWR);
  ioctl(this->file, I2C_SLAVE, this->address);
}

bool I2C::i2cWrite(char buffer[], int length){
  if(write(file, buffer, length) != length){
    printf("Failed to write!");
    return false;
  } else {
    return true;
  }
}

bool I2C::i2cRead(char buffer[], int length){
  if(read(file, buffer, length) != length){
    printf("Failed to read!");
    return false;
  } else {
    return true;
  }
}
