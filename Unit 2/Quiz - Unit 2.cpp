// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Quiz - Unit 2.

/*
Study Read/Write From a File.

http://xoax.net/cpp/crs/console/lessons/Lesson47/

Write a console application for the following:
Create a C++ Program to accept input from the user 
between the values of 0 to 100 (it is ok for grades to exceed 100). 
Allow the user to determine the amount of values that he/she plans to enter. 
Accept these values into an array.

Reflect strongly upon grade datatype. 
Should not grades be able to be rounded? 
A data type that cannot be rounded just won't do. 

Sort the Array Values from Greatest to Least
(Think Selection Sort, Bubble Sort, or another method)

Ask for the user's first name and output that to the screen.

Using C++ Syntax related to Outputting to a file, Output the results 
(grades in DESC order) with the user's name to a file called: GradeReport.txt 

Using C++ Syntax, read from the GradeReport.txt file, and output the 
previous results to the console (that is, to the screen, as read from the file).

Add a Multiple line C++ comment to the top of the program with your first name, 
last name, professor name, date, course name section, Name of Text 
Editor/Software used to creaethe program, and then a summary of what the program does. 

Label the Input, Process, and Output sections of the program with C++ Comments.

Add appropriate C++ Comments to explain the logic behind your chosen method for 
solving the problem. Comments are also helpful for the reference of future programmers, 
and for you.  

Enter test values in the program twice using the following data: 
92.5, 61.7, 75.5, 0, 105, -99, apple, green_tea. 

Save, build and execute your program.

Make the program loop until the user enters an exit condition. 'Y' or 'y' is 
"yes" to continue 'N' or 'n' is no to exit the program. 

Can you prevent the user from breaking your program if they enter an alphabetical 
character instead of a number…? If not, your points will be reduced on this program. 

Highlight the user’s name on-screen in color
*/

// Created with Microsoft Visual Studio Code.
#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
	// Variables.
	int numOfGrades;
	int i;
	char firstName;
	string gradeReport;

    // User inputs the amount of grade values they plan to enter.
	cout << "How many grade values do you plan to enter? ";
	cin >> numOfGrades;
	
	cout << "Please only input grade values between 0 and 100. Decimals are allowed." << endl;

	// Creating the array with the size of the user input.
	float *values = new float[numOfGrades];

    // User inputs the individual grade values.
	for (i = 0; i < numOfGrades; i++)
	{
		cout << "Enter grade value " << i+1 <<" = ";
		cin >> values[i];
		
		if (values[i] < 0 || values[i] > 100)
		{
		    cout << "Invalid input. Only grade values between 0 and 100 are allowed." << endl;
		    cout << "Please run the program again and start over." << endl;
		    return 0;
		}
	}
	
    // Sorting the grades values from greatest to least.
    sort(values, values + numOfGrades, greater<int>()); 

    // Printing the grade values from greatest to least.  
    for (int i = 0; i < numOfGrades; i++)
    cout << values[i] << endl;
	return 0;
	
	// Output of sorted grade values with user's name to file called: GradeReport.txt.
	ofstream myFile ("GradeReport.txt");
    if (myfile.is_open())
    {
        system("Color 02");
        cout << "Enter your first name: ";
	    cin >> firstName;
        system("Color 07");
	    cout << values[i] << endl;
    }
	else cout << "Unable to open file." << endl;
	
	// Output of results from GradeReport.txt to console screen.
	ifstream myFile ("GradeReport.txt");
    if (myfile.is_open())
    {
	    while (getline (myFile, gradeReport))
	    {
            system("Color 02");
	        cout << gradeReport << firstName << endl;
            system("Color 07");
	        cout << gradeReport << values[i] << endl;
	    }
	    myFile.close();
    }
    else cout << "Unable to open file." << endl;

return 0;
}