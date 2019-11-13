//-----------------------------------------------------------------------
// File: Step1Task6.cpp
// Summary: Reads a reference power and a target power.
// Returns the percieved difference according to the ear in db and gives the user an idea about how notcieable the difference is.
// Version: 1.0
// Owner: Mohamad Ghanem
//-----------------------------------------------------------------------

//Preprocesssor directives
#include <iostream>
#include <iomanip>
using namespace std;
//Prototype function
void calculateDBBoost();

int main() {
	char answer;
	do {
		calculateDBBoost();
		cout << "Would you like to calculate again? (Y/N)";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');

	return 0;
}

//-----------------------------------------------------------------
// void calculateDBBoost()
//
// Summary: Reads the two amplifier powers and returns the db increase along with a reference to the minimum notcieable dB increase.
//
// Returns: -
//-----------------------------------------------------------------
void calculateDBBoost() {
	//Initial varaibles
	double referencePower = 0.0; //Power of the reference amplifier
	double power = 0.0; //Power of the target amplifier

	//Read the reference power
	cout << "Load reference power: ";
	cin >> referencePower;


	//Read the target power
	cout << "Load power: ";
	cin >> power;

	//Convert the ratio to dB
	double dB = 10 * log10(power / referencePower);


	// Display result with 2 decimals
	cout << fixed << showpoint << setprecision(1);

	//Putting it all together for the user
	cout << "A change from " << referencePower << " to " << power << " corresponds to " << dB << " dB"<< endl;
	cout << "That is, " << dB / 3 << " range of 3 dB" << endl;

}
