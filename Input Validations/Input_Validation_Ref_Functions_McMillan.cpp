/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

int main()
{
   //***********Validating int data type******************/
	int input = 0;
	input = validateInt(input); //validate my integer by function call, save that value into input
    cout << "You entered valid int: " << input << endl;
    
	/****************Extend code to Validate double (follow int pattern)**********/
	double inputDouble = 0.0;
  	inputDouble = validateDouble(inputDouble); //validate my double by function call, save that value into inputDouble
    cout << "You entered valid double: " << inputDouble << endl;

	/****************Extend code to Validate char (follow int pattern)**********/
	char inputChar = '\0'; //{0}
	inputChar = validateChar(inputChar); //validate my char by function call, save that value into inputChar
    cout << "You entered valid char: " << inputChar << endl;

	/****************Extend code to Validate string (follow int pattern, if possible)**********/
	string inputString = (""); 
	inputString = validateString(inputString); //validate my string by function call, save that value into inputString
    cout << "You entered string: " << inputString << endl;

	/****************Extend code to Validate if truly an int and greater than 77 **********/
	int input2 = 0;
	
	do
	{
		cout << "Enter an integer greater than 77." << endl;  
		input2 = validateInt(input2); //validate my integer by function call, save that value into input
		
		if(input2 < 77)
		{
			cout << "\nInvalid input: (" << input2 <<") number must be greater than 77." << endl;
		}
	}
	while(input2 < 77); //loop until input2 is greather than 77

    cout << "You entered valid int: " << input2 << endl;

	/****************Extend code to Validate if truly an double and greater than 0.00 **********/
	double inputDouble2 = 0.0;
	
	do
	{
		cout << "Enter an number greater than 0."<< endl; 
		inputDouble2 = validateDouble(inputDouble2); //validate my integer by function call, save that value into input
		
		if(inputDouble2 < 0)
		{
			cout << "\nInvalid input: (" << inputDouble2 <<") number must be greater than 0." << endl;
		}
	}
	while(inputDouble2 < 0); //loop until inputDouble2 is greather than 0

    cout << "You entered valid double: " << inputDouble2<< endl;

    return 0;
}
