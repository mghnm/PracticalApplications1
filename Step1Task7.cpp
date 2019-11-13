//-----------------------------------------------------------------------
// File: Step1Task7.cpp
// Summary: Reads a 3 digit number and sums up the numbers three digits.
// Returns the sum to the user.
// Version: 1.0
// Owner: Mohamad Ghanem
//-----------------------------------------------------------------------

//Preprocesssor directives
#include <iostream>
#include <iomanip>
using namespace std;
//Prototype function
void sumNumber();

int main() {
	char answer;
	do {
		sumNumber();
		cout << "Would you like to calculate again? (Y/N)";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');

	return 0;
}

//-----------------------------------------------------------------
// void sumNumber()
//
// Summary: Reads a 3 digit number and sums the individual numbers making that 3 digit number up. E.g. 123 = 6
//
// Returns: -
//-----------------------------------------------------------------
void sumNumber() {
	//Initial varaibles
	int num = 0; //Number that the user wants to sum
	int sum = 0; //The sum of those numbers

	//Read the number
	cout << "3 digit Number: ";
	cin >> num;


	//Sum the elements of the number
	//We repeat 3 times as we will have 3 numbers to add
	for (int i = 0; i < 3; i++) {

		//Num modulus 10 will effectively return the ones value E.g. 12 % 10 = 2
		sum += num % 10;
		//Integer division of num will truncate the number thus we get the tens in the ones positon E.g 12 / 10 = 1 and 1 % 10 = 1.
		num /= 10;
	}



	//Putting it all together for the user
	cout << "The sum of the digits making up your number is: " << sum << endl;


}
