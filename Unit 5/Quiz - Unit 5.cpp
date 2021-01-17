// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Quiz: Unit 5.

/* 
Create a vector called shoppingList to accept a list of items 
you wish to purchase. Use the terminating word "end" to signal 
the end of the list. Sort the vector of names in Descending order, 
and output the results to the screen. Highlight your favorite 
item in the list in with a ***** appended to it to ensure that 
you don't miss it.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> shoppingList = {"Apple Watch*****", "Laptop", "Standing Desk", "FSU Wall Decorations", "New Couch", "end"};
   
    for (int i = 0; i < shoppingList.size(); i++)
    cout << shoppingList[i] << endl;
}