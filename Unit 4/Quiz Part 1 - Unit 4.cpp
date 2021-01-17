// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Quiz Part 1: Unit 4.

/* 
Write a C++ program that will take Emile’s sentence as 
follows in as an input string, and output instances of 
uppercase “I” if an instance of lowercase “i” is found 
in the string. The resulting string should contain the 
corrected instances. In all other instances, else leave 
the character in the case that it originally was.

The string is: “Yesterday’s Doctor Who broadcast made me 
laugh and cry in the same episode! i can only wonder what 
the Doctor will get into next. My family and i are huge fans.”

Store the above in a string variable, and process the lowercase 
independent "i" instances that you find within that 
particular string.
*/

#include <iostream>
#include <stack>
#include <string>
#include <math.h>
#include <ctype.h>
using namespace std;

int main()
{
    string str = "Yesterday's Doctor Who broadcast made laugh and cry in the same episode! i can only wonder what the Doctor will get into next. My family and i are huge fans.";

    cout << "Input String: " << str << endl;

    for (int i = 0; i < str.size(); ++i)
    {
        if(str[i] == 'i')
        str[i] = toupper(str[i]);
    }

    cout << "Modified String: " << str << endl;
    
    return 0;
}