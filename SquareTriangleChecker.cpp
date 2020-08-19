#include <iostream>
#include <cmath>

using namespace std;
//This program allows you to input side lengths of a quadrilaterial and determine if it is a square, or a tiral and determine if it has a right angle.
int main()
{
	int side1;
	int side2;
	int side3;
	int side4;



	int qort;

	cout << "Would you like to input a quadrilaterial (1) or triangle (2)?" << endl;

	cin >> qort;
//QUARDRILATERIAL///////////////////////////////////////////////////////////////////
	if (qort == 1) {

		cout << "You have selected quadrilaterial!" << endl;
		cout << "Enter your four side lenghts..." << endl;

		cout << "Side 1:" << endl;
		cin >> side1;

		cout << "Side 2:" << endl;
		cin >> side2;

		cout << "Side 3:" << endl;
		cin >> side3;

		cout << "Side 4:" << endl;
		cin >> side4;


		if (side1 == side2 == side3 == side4) {

			cout << "Your quadrilaterial is a square!" << endl;

		}
		else {
			cout << "Your quadrilaterial is not a square :(" << endl;
		}

	}
//TRIANGLE///////////////////////////////////////////////////////////
	if (qort == 2) {

		cout << "You have selected triangle!" << endl;
		cout << "Enter your side lengths..." << endl;


		cout << "Side 1:" << endl;
		cin >> side1;

		cout << "Side 2:" << endl;
		cin >> side2;

		cout << "Side 3:" << endl;
		cin >> side3;



		if (sqrt((side1*side1)+(side2*side2)==side3*side3) || sqrt((side2 * side2) + (side3 * side3) == side1 * side1) || sqrt((side1 * side1) + (side3 * side3) == side2 * side2)){

		cout << "Your triagnle has a right angle!" << endl;
}
		else {
			cout << "Your triangle does not have a right angle :(" << endl;
		}



	}
	


	return 0;
}