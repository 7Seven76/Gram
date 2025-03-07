//
// Created by Ryank on 3/6/2025.
//
#ifndef GAS_CAR_H
#define GAS_CAR_H

#include <iostream>
#include "Car.h"
using namespace std;

class Gas_car : public Car {
  public:
    Gas_car();
    Gas_car(string s);
    sting getType() const;
    void setType(string s);
    void display() override;

   private:
     string Engine_type;


};




#endif //GAS_CAR_H
