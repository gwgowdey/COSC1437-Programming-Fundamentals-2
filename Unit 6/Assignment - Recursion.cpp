// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Assignment: Recursion.

/*
Source/Credit: https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/

Tower of Hanoi is a mathematical puzzle where we have
three rods and n disks. The objective of the puzzle is to
move the entire stack to another rod, obeying the following
simple rules:

1.) Only one disk can be moved at a time.
2.) Each move consists of taking the upper disk from
one of the stacks and placing it on top of another stack.
3.) No disk may be placed on top of a smaller disk.

Write a recursive function factorialR that will generate
factorials based upon the user starting point (validated)
input from the keyboard. i.e. When the user enters, 4,
the function should multiply 4 x 3 x 2 x 1, and output the
result of 24.
 
Recursion is the process in which a function calls
itself directly or indirectly.
Source/Credit: https://www.geeksforgeeks.org/recursion/
*/

#include <bits/stdc++.h> 
using namespace std; 
  
void towerOfHanoi(int R, char from_rod, char to_rod, char aux_rod)  
{  
    if (R == 1)  
    {  
        cout << "Move disk 1 from rod " << from_rod <<  " to rod " << to_rod << endl;  
        return;  
    }  
    towerOfHanoi(R - 1, from_rod, aux_rod, to_rod);  
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;  
    towerOfHanoi(R - 1, aux_rod, to_rod, from_rod);  
}  
  
// Driver code.
int main()  
{  
    int R = 4; // Number of disks.
    towerOfHanoi(R, 'A', 'C', 'B'); // A, B and C are names of rods.  
    return 0;  
} 


// Recursive function factorialR.
unsigned int factorial(unsigned int R)
{
    if (R == 0)
    return 1;
    return R * factorial(n - 1);
}

// Driver code.
int main()
{
    int num = 4;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0; 
}