#include "Card.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Card c1("Red", 4);
	Card c2("Black", 1);
	Card c3("Red", 5);

	cout << c1 << "\n" << c2 << "\n" << c3 << endl;

	cout << "Changing the foclor of c1 to Black... ";
	c1.setSuit("Black");
	cout << "c1: " << c1 << endl;
	cout << "Changing the value of c2 to 9... ";
	c2.setValue(9);
	cout << "c2: " << c2 << endl;


	return 0;

}