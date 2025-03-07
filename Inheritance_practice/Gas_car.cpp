//
// Created by Ryank on 3/6/2025.
//

#include "Gas_car.h"

Gas_car::Gas_car(){}

Gas_car::Gas_car(string Engine_Type){
  this->Engine_type = Engine_Type;
  }

  string Gas_car::getType{
    return Engine_type;
    }

  void Gas_car::setType(string Engine_Type){
    this->Engine_type = Engine_Type;
  }


void Gas_car::display(){
  cout<<"Engine Type: "<<Engine_type<<endl;
}

