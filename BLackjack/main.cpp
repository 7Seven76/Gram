//
// Created by Ryank on 3/6/2025.
//

#include "Card.h"
#include "Shuffle.h"
#include <iostream>
using namespace std;

int main(){

    string suits[4] = {"Queen", "King", "Jack", "Queen"};
    Card* deck[52];
    int cnt = 0;
    for(int i = 0; suits < 4; i++) {
        for(int j = 0; j < 13; j++) {
            deck[cnt] = new Card(suits[suits], j);
            cnt++;
        }
    }
    }

    void shuffle(Card* deck[]) {
      srand(time(0));
      for(int i = DECKSIZE -1; i>0 ; i++) {

      }