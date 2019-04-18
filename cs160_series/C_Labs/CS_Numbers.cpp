/******************************************************
 **WorkingWithNumbers.cpp
 ** Author: Hao Lin Deng
 ** Date: 1/11/2017
 ** Description: This is the program to calculate the maximum and minimum for signed numbers and maximum for unsigned numbers
 ** Input: Assign variables with max and min signed and unsigned number calculations.
 ** Output: Printing out the max and min signed and unsgiend numbers for any bits request the user wants.
 ******************************************************/

#include <iostream>
#include <cmath>
#include <climits>

using namespace std;



/*********************************************************************
 *  ** Function: main function
 *   ** Description: Calculate and print out the max and min signed numbers and max unsigned numbers using the "climits" library
 *    ** Parameters: None
 *     ** Pre-Conditions: "climits" library and "cmath" library must exist; Variable n must be declared; Variables for Max and Min for both signed and unsigned must declared.
 *      ** Post-Conditions: The syntaxes to use for the calculations must exist; The 8 bits calculations must exist; User must input a value for variable n; values after the calculation will be printed.
 *       ** Return: None
 *        *********************************************************************/
int main() {

	int n = 0;


	cout << "Min Signed int: " << INT_MIN << endl;
	cout << "Max Signed int: " << INT_MAX << endl;
	cout << "Max Unsigned int: " << UINT_MAX << '\n' << endl;

	cout << "Min Signed long: " << LONG_MIN << endl;
	cout << "Max Signed long: " << LONG_MAX << endl;
	cout << "Max Unsigned long: " << ULONG_MAX << '\n' << endl;

	cout << "Min Signed short: " << SHRT_MIN << endl;
	cout << "Max Signed short: " << SHRT_MAX << endl;
	cout << "Max Unsigned short: " << USHRT_MAX << '\n' << endl;

	cout << "Min Signed number in 1 byte (8 bits): " << -(pow (2,7)) << endl;
	cout << "Max Signed number in 1 byte (8 bits): "  << pow (2,7) - 1<< endl;
	cout << "Max Unsigned number in 1 byte (8 bits): " << pow (2,8) - 1<< '\n' << endl;

	cout << "Please enter the number of bits you wish to find the max and min: " << endl;
	cin >> n;

	int Max_Signed = (pow (2,n-1) - 1);
	int Min_Signed = (-(pow (2,n-1)));
	int Max_Unsigned = (pow (2,n) - 1);

	cout << "Max Signed number in " << n << " bits: " << Max_Signed << endl;
	cout << "Min Signed number in " << n << " bits: " << Min_Signed << endl;
	cout << "Max Unsigned number in " << n << " bits: " << Max_Unsigned << endl;



	return 0;

}

