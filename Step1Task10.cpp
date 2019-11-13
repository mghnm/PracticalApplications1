//-----------------------------------------------------------------------
// File: Step1Task10.cpp
// Summary: Reads the savings and the number of years it will be kept at the bank.
// Returns the amount after the period has passed given the interest rate of the bank.
// Version: 1.0
// Owner: Mohamad Ghanem
//-----------------------------------------------------------------------

//Preprocesssor directives
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//Prototype function
void readInput();
void calcInterest();
void printOutput();

//Global Variables accessed by several methods
double initialAmount = 0.0;
double numYears = 0.0;
//0.03 is equivalent to 3 percent interest
const double INTEREST = 0.03;
//Result of calculation
double finalAmount = 0.0;

int main() {
	char answer;
	do {
		readInput();
	    calcInterest();
		printOutput();
		cout << "Would you like to calculate again? (Y/N)";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');

	return 0;
}

//-----------------------------------------------------------------
// void calcInterest()
//
// Summary: Calculates the interest after a certain amount of years have passed.
// Returns: -
//-----------------------------------------------------------------
void calcInterest() {
	//We will use the formula in order to find out what the final value is
	finalAmount = initialAmount * pow((1 + INTEREST), numYears);

}

//-----------------------------------------------------------------
// void readInput()
//
// Summary: Reads the initial sum and the number of years that have passed (Obtained as user input)
// Returns: -
//-----------------------------------------------------------------
void readInput() {

	// Read the values from user
	system("CLS"); // Clear screen
	cout << "COMPOUND INTEREST" << endl;
	cout << "==========" << endl << endl;
	cout << "Input initial investment: ";
	cin >> initialAmount;
	cout << "Input for how many years: ";
	cin >> numYears;
	cout << endl;

}

//-----------------------------------------------------------------
// void printOutput()
//
// Summary: Returns the result of the calculation in a formatted way
// Returns: -
//-----------------------------------------------------------------
void printOutput() {
	// Display results
	cout << fixed << showpoint; // Decimal form, display trailing zeroes
	cout << "The bank has a 3% interest rate on the investment. After " << setprecision(1) << numYears << " years your investment is valued at: " << endl;
	cout << setw(12) << "Final Value" << endl
		<< setw(12) << "-------" << endl
		<< setw(12) << setprecision(2) << finalAmount << endl << endl;
}
