//
// Created by Ryank on 3/6/2025.
//

#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include <iostream>
using namespace std;

class Deckofcards {
public:
  Deckofcards();
  Card* draw();
  void shuffle(); // use fisher-yates shuffle
  void reset(); /*
  loop throughthe remaining cards and delete them
  set card_cnt = 0 ,
  recreate the 52 cards,
  */



private:
  int card_cnt;
  Card* deck[52];


};



#endif //DECKOFCARDS_H
