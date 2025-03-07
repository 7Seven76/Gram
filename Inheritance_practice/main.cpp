//
// Created by Ryank on 3/6/2025.
//
#include "Car.h"
#include "Gas_car.h"
#include "Electric_car.h"
#include <iostream>
using namespace std;

int main(){
  Car Lexus("Gas", 2);
  Gas_car LFA("4.8 V8");

  Lexus.display();
  LFA.display();
  }