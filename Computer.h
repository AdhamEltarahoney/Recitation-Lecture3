#ifndef COMPUTER_H
#define COMPUTER_H

#include "Device.h"

#include <string>
class Computer : public Device {
public:
  Computer(); // default constructor
  Computer(std::string ownr, int y_old, std::string brnd, double proc_speed); // constructor

  virtual void display_info() override;

  // override usage cost function for computers
  virtual double calculateUsageCost() const override {
    return Device::calculateUsageCost() + processor_speed * 100;
  }

protected:
  std::string brand;
  double processor_speed;
};


#endif