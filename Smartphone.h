
#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <string> 
#include "Device.h"

class Smartphone : public Device {
public:
  Smartphone(); // default constructor
  Smartphone(std::string ownr, int y_old, std::string brnd, double storage); // constructor

  virtual void display_info() override;

  // override usage cost function for smartphones
  virtual double calculateUsageCost() const override {
    return Device::calculateUsageCost() + storage * 20;
  }

protected:
  std::string brand;
  double storage;
};

#endif