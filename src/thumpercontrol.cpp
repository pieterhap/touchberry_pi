#include "lib/thumpercontrol.h"

ThumperControl::ThumperControl(std::string url){
  this->url = url;
  this->drive = "/speed";
  this->alarm = "/alarm";
  this->rgb = "/neopixels/strings/0";
}

void ThumperControl::post(std::string url, std::string json){
  RestClient::Response r = RestClient::post(url, "application/json", json);
}

void ThumperControl::setDrive(int left, int right){
  std::string url = this->url + this->drive;
  std::string json = "{ \"left_speed\":" + std::to_string(right) + ", \"right_speed\":" + std::to_string(left) + "}";
  post(url, json);
}

void ThumperControl::setAlarm(std::string onoff){
  std::string url = this->url + this->alarm;
  std::string json = "{\"action\": \"" + onoff + "\"}";
  post(url, json);
}

void ThumperControl::setRGB(int red, int green, int blue){
  std::string url = this->url + this->rgb;
  std::string json = "{ \"red\":" + std::to_string(red) + ", \"green\":" + std::to_string(green) + ", \"blue\":" + std::to_string(blue) + "}";
  post(url, json);
}
