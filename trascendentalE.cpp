/*--- transcendentalE.cpp -------------------------------------------

This program will approximate the value of the transcendental 
number e based on the number of terms selected by the user.

Written by	:   Jessica Adamec
Written for :	CSCI 1106-01 Fall 2017
Date		:	9-20-2017
-------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const string COLUMNHEADER = "Term       Total   ";
const string UNDERLINE = "=================== ";

int main()
{
	int termValue;	//Number of iterations chosen by the user
	int	i = 1;		//Counter variable
	double eValue = 1.0;		//Value of transcendental number e
	double factorial = 1.0;		//Value of the factorial used in the while loop

	//Get number of iterations
	cout << "Please enter how many terms you would like to count to ---> ";
	cin >> termValue;

	//Compute and display eValue
	cout << endl << COLUMNHEADER << endl << UNDERLINE << endl;
	while (i <= termValue) {	
		factorial = factorial * (1.0 / i);
		eValue = eValue + factorial;
		cout << setprecision(termValue) << i << "	" << eValue << endl;
		i++;
	}//end while

	return 0;
}//end main