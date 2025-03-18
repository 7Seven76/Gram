//
// Created by Ryank on 3/11/2025.
//

#ifndef CARD_H
#define CARD_H
#include <iostream>
using namespace std;
const string SUITS[4] = { "Diamond" , "Clubs", "Heart", "Spade" };
const string FACE[4] = { "ACE", "Jack", "Queen", "King"};

class Card {
  public:
    Card(string suit, int value);
    string get_suit() const;
    int get_value() const;
    void display() const;
private:
  string suit;
  int value;
};



#endif //CARD_H
