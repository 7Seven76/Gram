//
// Created by Ryank on 3/6/2025.
//

#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car {
public:
    Car();
    Car(string Type, int Doors);
    string getType() const;
    int getDoors() const;
    void setType(string Type);
    void setDoors(int Doors);
    virtual void display();
private:
    string Type;
    int Doors;
};



#endif //CAR_H
