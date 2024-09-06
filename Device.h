#ifndef DEVICE_H
#define DEVICE_H
// using namespace std;
#include <string>

class Device {
public:
  Device();                            // default constructor
  Device(std::string ownr, int y_old); // constructor
  virtual void display_info();

  // setter function for owner
  void setOwner(std::string owner);

  // getter function for owner
  std::string getOwner() const; 

  // virtual function to calculate usage cost
  virtual double calculateUsageCost() const;

protected:
  std::string owner;
  int years_old;
};


#endif