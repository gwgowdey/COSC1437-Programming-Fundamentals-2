// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Quiz Part 2: Unit 4.

/*
Create a Vector called animals to accept a list of animal 
names (strings). Use the terminating word "end" to signal 
the end of the list. Sort the vector of names in descending 
order, and output the results to the screen.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> animals;
    cin >> "Enter animal names: " >> animals >> endl;

    sort(animals.rbegin()), animals.rend());
    for(string &x : values)

    cout << x << " ";
    cout << "End." << endl;
    
    return 0;
}