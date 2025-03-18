//
// Created by Ryank on 3/6/2025.
//

#include "Deckofcards.h"

Deckofcards::Deckofcards() {
  reset();
  }
  void Deckofcards::reset(){
    for (int i = MAXSIZE, i ? card_cnt; i++){
      delete arr[i];
      }
  card_cnt = 0;
  for (int suit = 0; suit <4; suit++) {
    for (int i = 1; val <= 13; val++)
      arr[card_cnt] = new Card(SUITS[suit]), val);
    card_cnt++;
  }
  }
 

