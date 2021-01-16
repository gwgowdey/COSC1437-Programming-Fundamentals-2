// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Quiz: Unit 3.

/*
Create the appropriate Object Oriented Class Definition
and code to calculate the area of instances of the
the Triangle Class.

In int main() write the appropriate code to accept the
base and height if 3 instances of the Triangle Class.

Echo to the user the values that he/she provide for base
and height in each of the 3 triangles, and the calculated
area of each.

Output to the screen also the totalArea of the 3 Triangles
combined.
*/

#include <iostream>
using namespace std;

// Class declarations.
int main()
{
    double base1, base2, base3;
    double height1, height2, height3;
    double area1 = .5 * base1 * height1;
    double area2 = .5 * base2 * height2;
    double area3 = .5 * base3 * height3;
    double totalArea = area1 + area2 + area3;

    // User input of base and height for each respective triangle.
    cout << "Enter base of triangle 1: "; 
    cin >> base1;
    cout << "Enter height of triangle 1: "; 
    cin >> height1;

    cout << "Enter base of triangle 2: ";
    cin >> base2;
    cout << "Enter height of triangle 2: "; 
    cin >> height2;

    cout << "Enter base of triangle 3: "; 
    cin >> base3;
    cout << "Enter height of triangle 3: ";
    cin >> height3;

    // Output of individal and total areas of all three triangles.
    cout << "Entered base of triangle 1: " << base1 << endl;
    cout << "Entered height of triangle 1: " << height1 << endl;
    cout << "Area of triangle 1: " << area1 << endl;

    cout << "Entered base of triangle 2: " << base2 << endl;
    cout << "Entered height of triangle 2: " << height2 << endl;
    cout << "Area of triangle 2: " << area2 << endl;

    cout << "Entered base of triangle 3: " << base3 << endl;
    cout << "Entered height of triangle 3: " << height3 << endl;
    cout << "Area of triangle 3: " << area3 << endl;

    cout << "Total area of the 3 combined triangles: " << totalArea << endl;

    return 0;
}