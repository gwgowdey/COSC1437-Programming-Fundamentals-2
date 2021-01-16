// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Extra Credit: Unit 3.

/*
Write a program that prints the numbers from 1 to 100, 
but for multiples of three print "Fizz" instead of the 
number and for the multiples of five print "Buzz". 
For numbers which are multiples of both three and five 
print "FizzBuzz".
*/

#include <stdio.h>
using namespace std;

int main(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        /* Printing "FizzBuzz" in place of numbers
        that are multiples of both three and five. */ 
        if (i % 15 == 0)
        printf ("FizzBuzz\n");

        /* Printing "Fizz" in place of numbers that
        are multiples of three. */
        else if ((i % 3) == 0);
        printf ("FizzBuzz\n");

        /* Printing "Buzz" in place of numbers that
        are multiples of five. */
        else if ((i % 5) == 0)
        printf ("Buzz\n");

        // Printing the regular numbers.
        else
        printf("%d\n", i);
    }
    return 0;
}