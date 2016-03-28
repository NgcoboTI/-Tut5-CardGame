#pragma once
#include <iostream>
#include "Card.h"
#include "Card.h"

using namespace std;

class DeckOfCards
{

private:
	Card * deck;
	int numOfCards = 20 ;

public:
	DeckOfCards();
	~DeckOfCards();

	Card reset();
	Card shuffle();
	Card draw();
	Card peek();
	int numberOfCards();
	void print();
	
};

