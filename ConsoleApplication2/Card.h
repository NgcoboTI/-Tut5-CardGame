#pragma once
#include <string>

using namespace std;

class Card
{

private:
	int num;
	string color;

public:
	Card();
	~Card();
	string colour();
	int number();
	void print();
};

