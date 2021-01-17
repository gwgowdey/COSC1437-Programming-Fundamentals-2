// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Extra Credit: C++ Calculator.

/* 
Implement a calculator based upon the following algorithm:

first number = get input from user
if first number not numeric then print warning
second number = get input from user
if second number not numeric then print warning
operation = get input from user
lower case the operation for case insensitivity
if operation is + or "add" then
    print first number + second number
otherwise if operation is - or "subtract" then
    print first number - second number
otherwise if operation is * or "multiply" then
    print first number * second number
otherwise if operation is / or "divide" then
    print first number / second number
otherwise
    print warning

Sample input/output
Number1: 3
Number2: 5
Operation: +
=8

OR

Number1: 3
Number2: 5
Operation: add
=8
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <bits/stdc++.h>
using namespace std;

int main ()
{
  
 char s[255];
 char s1[255];
 int y;
 int z;

 cin >> s;

 int x = 0;
 int flag1 = 0;

 while (s[x]! = '\0')
 {
    if (!isdigit(s[x]))
    {
      cout << "Warning: Please enter a valid number/numeric." << endl;
      flag1 = 1;
      break;
    }
    x++;
 }

 cout << endl;
 cin >> s1;

 int flag2 = 0;
 x = 0;

 while (s1[x]! = '\0')
 {
    if (!isdigit(s1[x])) 
    {
      cout << "Warning: Please enter a valid number/numeric." << endl;
      flag2 = 1;
      break;
    }
    x++;
 }

 if (flag1 == 0)
 {
    y = atoi(s);
 }
 else
 {
   cout << "Warning: First number was not a valid numeric. Operation cannot be performed." << endl;
 }

 if (flag2 == 0)
 {
   z = atoi(s1);
 }
  else
 {
   cout << "Warning: Second number was not a valid numeric. Operation cannot be performed." << endl;
 } 

 if (flag1 == 0 && flag2 == 0)
 {
   cout << "Please enter the operation you wish to perform." << endl;
   char op;
   cin >> op;

   switch(op)
   {
     case '+':cout << "\n" << y+z;
     break;
     case '-':cout << "\n" << y-z;
     break;
     case '*':cout << "\n" << y*z;
     break;
     case '/':cout << "\n" << y/(z*1.0);
     break;
     default:cout << "Warning: Please enter a valid operator." << endl;
   }
}
}