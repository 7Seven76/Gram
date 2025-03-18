//
// Created by Ryank on 3/11/2025.
//

#ifndef BASE_PLAYER_H
#define BASE_PLAYER_H

#include "card.h"

class base_player {
public:
base_player();
void reset_hand();
int calculate_ace_11(bool ace_eleven);

  virtual bool hit() = 0; // pure virtual function
void add_card(Card* c);
void display_hand() const;

private:
  int hand_cnt;
  Card* hand[7];
};



#endif //BASE_PLAYER_H
