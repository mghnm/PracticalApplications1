//-----------------------------------------------------------------------
// Object: This program has some syntax errors. Use the compiler to find
// and correct them. Document your changes with comments or in log.
//-----------------------------------------------------------------------
// File: CompileError.cpp
// Summary: This program calculates the weekly pay, given hours per week
// and wages per hour.
// Version: 1.1
// Owner: Tommy Löfqvist
//---------------------------------------------------------------------
// Log: 2005-03-09 Created the file, Mats!
// 2009-08-14 Revised by Tommy.Using manipulators to format output
// instead of IO-flags. Inserted "wait for return code" at the end.
// 2012-10-21: Revised by Anne. Converted to English version and VS2012
//-----------------------------------------------------------------------
#include <iostream> // Preprocessor directives
#include <iomanip>
using namespace std;
int main()
{
	// Define and initialize variables
	int hoursPerWeek = 35;
	double hourlyWages = 83;
	// Calculate weekly salary
	
	/*
		First syntax error. We need to define variable weeklyWages correctly with its type.
		
		weeklyWages = hoursPerWeek * hourlyWages;
	*/
	double weeklyWages = hoursPerWeek * hourlyWages;
	// Display results
	cout << fixed // Floating point format
		<< setprecision(2) // 2 decimals
		<< showpoint; // Show trailing zero’es
	cout << " Given an hourly wage of " << hourlyWages << " kr" << endl
		<< " and the number of hours per week " << hoursPerWeek << endl
		<< "the weekly wages will be: " << weeklyWages << " kr" << endl
		/*
		Second syntax error. We do not need to call cout when we are chaining with <<
		
		cout << "\nPress return!";
		*/
		<< "\nPress return!";
	cin.get(); // Wait for return

	/*
		Third syntax error. We have a return statement defined for a void main(). Therefore one solution is to set the return type to int.
		
		void main()
	*/
	return 0;
}