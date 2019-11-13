
//-----------------------------------------------------------------------
// File: Step1Task8.cpp
// Summary: Reads the wind speed and temparature.
// Returns the perceived temparature due to the wind causing chill.
// Version: 1.0
// Owner: Mohamad Ghanem
//-----------------------------------------------------------------------

//Preprocesssor directives
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
//Prototype function
void calculatePerceivedTemp();

int main() {
	char answer;
	do {
		calculatePerceivedTemp();
		cout << "Would you like to calculate again? (Y/N)";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');

	return 0;
}

//-----------------------------------------------------------------
// void calculatePerceivedTemp()
//
// Summary: Reads the wind speed and temparature to estimate the percieved temparature due to the wind having a chill effect.
//
// Returns: -
//-----------------------------------------------------------------
void calculatePerceivedTemp() {
	//I do not know what the constants are therefore they will be generically labled (Hopefully that is acceptable)
	const double C1 = 13.126667;
	const double C2 = 0.6215;
	const double C3 = 13.924748;
	const double C4 = 0.4875195;
	//This is the constant power term
	const double C5 = 0.16;

	//Temparature in celsius
	double tempC = 0.0;
	//Wind velocity m/s
	double windVelocity = 0.0;


	//Read the temperature in celsius
	cout << "Enter the temparature in celsius: ";
	cin >> tempC;

	//Read the wind speed m/s
	cout << "Enter the wind speed in m/s: ";
	cin >> windVelocity;

	//Use Osczevskis and Bluesteins formula
	double result = C1 + C2 * tempC - C3 * pow(windVelocity, C5) + C4 * tempC * pow(windVelocity, C5);


	// Display result with 1 decimals
	cout << fixed << showpoint << setprecision(1);

	//Putting it all together for the user
	cout << tempC << " degrees celsuis and " << windVelocity << " m/s give the percieved temparature of about " << result << " degrees celsuis" << endl;

}
