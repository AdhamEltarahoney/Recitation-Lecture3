
#include "Device.h"
#include <iostream>

// default constructor definition
Device::Device() : owner(""), years_old(-1) {}
// constructor definition
Device::Device(std::string ownr, int y_old) : owner(ownr), years_old(y_old) {}

void Device:: setOwner(std::string owner){
    this->owner = owner;
}

std::string Device::getOwner()const{
    return owner;
}
// print function for Device
void Device::display_info() {
  std::cout << "Owner: " << owner << std::endl;
  std::cout << "Years old: " << years_old << std::endl;
}

// virtual function to calculate usage cost
double Device::calculateUsageCost() const {
    return years_old * 500; // Basic cost per year of use
}