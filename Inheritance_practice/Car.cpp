//
// Created by Ryank on 3/6/2025.
//

#include "Car.h"
using namespace std;

[Car::Car() {

}]

Car::Car(string Type, int Doors) {
    this->Type = Type;
    this->Doors = Doors;
}
string Car::getType() const {
    return this->Type;
}
int Car::getDoors() const {
    return this->Doors;
}
void Car::setDoors(int Doors) {
    this->Doors = Doors;
}
void Car::setType(string Type) {
    this->Type = Type;
}
void Car::display() {
    cout << this->Type << " " << this->Doors << endl;
}

