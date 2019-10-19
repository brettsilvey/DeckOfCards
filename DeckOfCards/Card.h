#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

using namespace std;

class Card {
private:
	string suit;
	int value;
public:
	Card();
	Card(string, int);
	Card(const Card& c);

	//Set Functions
	void setSuit(string);
	void setValue(int);

	//Get Functions
	string getSuit() const;
	int getValue() const;

	//This is how we output
	friend ostream& operator<<(ostream&out, const Card&c);
};

Card::Card(string s, int v) {
	value = v;
	suit = s;
}

inline void Card::setSuit(string s)
{
	suit = s;
}

inline void Card::setValue(int v)
{
	value = v;
}

inline string Card::getSuit() const
{
	return suit;
}

inline int Card::getValue() const
{
	return value;
}

ostream & operator<<(ostream & out, const Card & c)
{
	// TODO: insert return statement here
	out << c.suit << "," << c.value;
	return out;
}

Card::Card() {
	suit = "";
	value = 0;
}

#endif // CARD_H
