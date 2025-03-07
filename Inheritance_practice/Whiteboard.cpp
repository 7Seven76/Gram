//
// Created by Ryank on 3/6/2025.
//
#include <iostream>
using namespace std;

class Car {
public:
    Car();
private:
    string Type;
    int Doors;
};

class Gas_car : public Car {
public:
    Gas_car();

private:
    string Engine_type;
    bool Naturally_aspirated;

};

class Electric_car : public Car {
public:
    Electric_car();

private:
    int Motors;

};
