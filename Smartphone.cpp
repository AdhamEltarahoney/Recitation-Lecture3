
#include "Smartphone.h"
#include <iostream>

// default constructor for Smartphone
Smartphone::Smartphone() : Device("", -1), brand(""), storage(-1) {}

// constructor for Smartphone
Smartphone::Smartphone(std::string ownr, int y_old, std::string brnd, double storage)
    : Device(ownr, y_old), brand(brnd), storage(storage) {}




// print function for Smartphone
void Smartphone::display_info() {
  Device::display_info();
  std::cout << "Brand: " << brand << std::endl;
  std::cout << "Storage: " << storage << " GB" << std::endl;
}