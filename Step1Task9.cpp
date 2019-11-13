//-----------------------------------------------------------------------
// File: Step1Task9.cpp
// Summary: Reads the change of growth of investment over 4 years.
// Returns the final result of investment in SEK
// Version: 1.0
// Owner: Mohamad Ghanem
//-----------------------------------------------------------------------

//Preprocesssor directives
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//Prototype function
void calcStockInvestment();

int main() {
	char answer;
	do {
		calcStockInvestment();
		cout << "Would you like to calculate again? (Y/N)";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');

	return 0;
}

//-----------------------------------------------------------------
// void calcStockInvestment()
//
// Summary: Reads the stock value changes over 4 years and gives the user the final value on their investment in SEK
// Returns: -
//-----------------------------------------------------------------
void calcStockInvestment() {
	//Array of doubles for the investment values
	double changes[] = { 0.0, 0.0, 0.0, 0.0 };
	//The initial invetment the user did
	double investment = 0.0;
	//The output value 
	double finalInvestmentValue = 0.0;

	//Read the temperature in celsius
	cout << "Enter the initial investment in SEK: ";
	cin >> investment;

	//Read the wind speed m/s
	cout << "Enter the changes over the past 4 year in percentage (separated by spaces): ";
	cin >> changes[0] >> changes[1] >> changes[2] >> changes[3];

	//Use a for loop to calculate the final output
	finalInvestmentValue = investment;

	//Here we are essentially doing each multiplication for each year and assigning the new input to the output of the previous year.
	for (int i = 0; i < 4; i++) {
		finalInvestmentValue *= ( 1 + (changes[i] / 100.0));
	}


	// Display result with 1 decimals
	cout << fixed << showpoint << setprecision(2);

	//Putting it all together for the user
	cout << "Your initial investment of " << investment << " SEK 4 years ago is now worth " << finalInvestmentValue << " SEK"<< endl;

}
