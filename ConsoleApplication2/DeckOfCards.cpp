#include "DeckOfCards.h"
#include "Card.h"
#include <iostream>

using namespace std;


DeckOfCards::DeckOfCards()
{
	Card *deck = new Card[20];

}


DeckOfCards::~DeckOfCards()
{
	delete[] deck;
}

Card DeckOfCards::reset()
{
	int i = 0;
	Card temp;

	
	for (i; i < 50; i++)
	{
		int n1 = rand() % 20;
		int n2 = rand() % 20;
		


		temp = deck[n1];
		deck[n1] = deck[n2];
		deck[n2] = temp;

	}
	return *deck;
}

int DeckOfCards:: numberOfCards(){
	return numOfCards;
}