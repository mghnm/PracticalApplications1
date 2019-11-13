
//-----------------------------------------------------------------------
// File: Step1Task5.cpp
// Summary: Reads the distance remaining in swedish miles and the average speed (km/h).
// Returns the estimated time remaining until arrival at destination.
// Version: 1.0
// Owner: Mohamad Ghanem
//-----------------------------------------------------------------------

//Preprocesssor directives
#include <iostream>
using namespace std;
//Prototype function
void calculateRemaining();

int main() {
	char answer;
	do {
		calculateRemaining();
		cout << "Would you like to calculate again? (Y/N)";
		cin >> answer;
	} while (answer == 'Y' || answer == 'y');

	return 0;
}

//-----------------------------------------------------------------
// void calculateRemaining()
//
// Summary: Reads the average velocity (km/h) and distance left in swedish miles and prints the time remaining in hours and minutes till arrival.
//
// Returns: -
//-----------------------------------------------------------------
void calculateRemaining() {
	//Initial varaibles
	const int MILTOKM = 10; //one swedish mile is 10 km according to https://www.convertunits.com/from/kilometer/to/mil+[Sweden]
	double distance = 0.0; //Distance in swedish miles according to user
	double averageSpeed = 0.0; //Average speed of vehicle in km/h

	//Read the distance remaining
	cout << "Enter the distance remaining to your destination (Swedish Miles): ";
	cin >> distance;

	//Convert distance to KM
	double distanceKM = distance * MILTOKM;

	//Read the average speed
	cout << "Enter the average speed that will be maintained until arrival (km/h): ";
	cin >> averageSpeed;

	//Find the hours it takes till destination
	double timeRemaning = distanceKM / averageSpeed;

	//Casting to int will elimnate any decimal points
	int hours = (int)timeRemaning; 

	//Extracting the minutes by subtracting the hours (integer part) thus leaving only the decimal part. We multiply by 60 as there is 60 minutes in an hour.
	//Finally had to use std::round() in order to correctly round up or down to the nearest integer.
	int minutes = (int) round(((timeRemaning - hours) * 60));

	//Putting it all together for the user
	cout << "Time Remaning until arrival: " << hours << " hour(s) and " << minutes << " minute(s)" << endl;

}
