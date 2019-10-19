#ifndef CARD_H
#define DECK_H
#include "Card.h"
#include <iostream>

class Deck {
private:
	Card* theDeck;
	int numCards;
public:
	Deck();
	Card dealCard() const;
	
	bool isEmpty() const;


};

Deck::Deck() {
	numCards = 0;
	theDeck = new Card[18];
	for (int i = 1; i <= 9; i++) {
		theDeck[numCards] = Card("Red", i);
		numCards++;
		theDeck[numCards] = Card("Black", i);
		numCards++;
	}
}
#endif;

