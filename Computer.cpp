#include "Computer.h"
#include <iostream>

// default constructor for Computer
Computer::Computer() : Device("", -1), brand(""), processor_speed(-1) {}

// constructor for Computer
Computer::Computer(std::string ownr, int y_old, std::string brnd, double proc_speed)
    : Device(ownr, y_old), brand(brnd), processor_speed(proc_speed) {}

// print function for Computer
void Computer::display_info() {
  Device::display_info();
  std::cout << "Brand: " << brand << std::endl;
  std::cout << "Processor Speed: " << processor_speed << " GHz" << std::endl;
}
