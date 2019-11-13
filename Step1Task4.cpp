//-----------------------------------------------------------------------
// Object: This program has logical errors. Find and correct them.
// There are miscalculations and the program can't be stopped with 'N'.
// Document your changes with comments or in log.
//-----------------------------------------------------------------------
// File: LogicalError.cpp
// Summary: Reads price and number of articles from user. Calculates and prints
// number, tax rate and price with tax rate (swedish "moms").
// Version: 1.1
// Owner: Tommy Löfqvist
//-----------------------------------------------------------------------
// Log: 2005-03-09 Created the file, Mats!
// 2009-08-14 Revised by Tommy. Swedish variable names and output text.
// Number of items is now included.
// Code for the problem is placed in a separate function
// that is iterated in the main function.
// 2012-10-21 Revised by Anne. Converted to English version and VS 2012
//-----------------------------------------------------------------------
//	Preprocessor	directives
#include <iostream>
#include <iomanip>
using namespace std;
// Prototypes
void priceCalculation();
int main()
{
	char answer;
	do
	{
		priceCalculation();
		cout << "One more time? (Y/N): ";
		cin >> answer;
	  /*
		Frist logical problem. Instead of comparator == symbol the = symbol was used.

		answer = 'Y'
	  */
	} while (answer == 'Y' || answer == 'y');
	return 0;
}
//-----------------------------------------------------------------
// void priceCalculation()
//
// Summary: Reads price and number of articles from user. Calculates and prints
// quantity, vat and price with vat
// Returns: -
//-----------------------------------------------------------------
void priceCalculation()
{
	// Define and initialize constants and variables
	 /*
		Second logical problem. Instead of using a double to define the rate in its fraction form (the formula implies this is a number between 0 and 1),
		it is being used in its perfentage form. The solution would be to take this number and divide it by 100

		const int RATE = 25; // tax rate in percent
	  */
	const double RATE = 25.0 / 100.0; // tax rate in fraction of percentage
	double price = 0; // price per piece
	int nrOfArticles = 0; // number of articles
	double rateSEK = 0; // tax rate in SEK
	double totalPrice = 0; // price incl. tax rate
	// Read price and number of articles
	cout << "Enter the price excl. the tax rate (swedish moms): ";
	cin >> price;
	cout << "Enter the number of articles: ";
	cin >> nrOfArticles;
	// Calculate total price and tax rate
	/*
		Third logical problem. Order of operations matters in this case as now the rate will always be 0. We must find the total price before the rateSEK.

		rateSEK = totalPrice * RATE;
		totalPrice = nrOfArticles * price * (1 + RATE);
	  */
	totalPrice = nrOfArticles * price * (1 + RATE);
	/*
		Fourth logical problem. The rateSEK can not be determined by taking the totalPrice but rather needs the original price. 

		rateSEK = totalPrice * RATE;
	  */
	rateSEK = nrOfArticles * price * RATE;
	
	// Display result with 2 decimals
	cout << fixed << showpoint << setprecision(2);
	cout << nrOfArticles << " number of articles cost " << totalPrice << " kr. "
		<< endl << "Of this " << rateSEK << " kr is the tax rate." << endl;
}