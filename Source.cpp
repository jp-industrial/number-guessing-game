#include "c:\Users\james\Desktop\std_lib_facilities.h"

int main()

{
	//number guessing game

	int upper{ 100 }; //the upper boundary
	int lower{ 1 }; //lower boundary
	int range{ upper - lower }; //the possible amount of values.
	int half{ range / 2 }; //half of the range.

	char yesno = ' ';
	int guess = 0;

	cout << "Imagine an integer betweem 1 and 100.\n"
		<< "Is your number greater than or equal to 50?";
	
	while (cin >> yesno) { //we need inputs only to answer 'yes' or 'no'.
		if (yesno == 'y') {
			guess = 50;
			lower = 50;
			break;
		}

		if (yesno == 'n') {
			guess = 0;
			upper = 50;
			break;
		}
	}
	
	cout << "Is your number greater than " << half << "?\n";
	while (cin >> yesno) {

	}


}