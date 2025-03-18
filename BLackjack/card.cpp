//
// Created by Ryank on 3/11/2025.
//

#include "card.h"

Card::Card(string suit, int value) {
  this->suit = suit;
  this->value = value;
  }

  string Card::getSuit() {
    return this->suit;
  }
  int Card::getNumber() {
    return this->number;
  }


void Card::display() const{
  string card_name;
  if(this->value == 1) {
    card_name = FACE[0];
    }
    else if(this->value >10) {
      card_name = FACE[this->value - 10];
    }
    else {
      card_name = to_string(this->value);
      }
      cout << card_name << " of " << suit << endl;
      }
