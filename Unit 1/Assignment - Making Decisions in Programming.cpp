// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Assignment: Making Decisions in Programming.

/* 
You have been tasked with creating a decision program
menu to help students who are taking a Physics (Mechanics)
class perform simple foundations calculations.

Create a menu whereby the following options are present:

Velocity: v = ds/dt
V = given input of ds and dt calculate the velocity.
"Ask the user for the unit of measure for ds and dt
and append those values to the answer. Ex.) km/hour."

Acceleration: a = dv/dt
A = given input of dv and dt calculate the acceleration.
"Ask the user for the unit of measure for dv and dt
and append those values to the answer. Ex.) m/sec."

Motion:
v = v0 + at
s = s0 + v0t + 1/2at^2
v^2 = v0^2 + 2a(s - s0)
v = 1/2(v + v0)
"For the motion formulas, I will be looking for all 4. Ask the
user first if he/she would like to calculate motion, then complete
a submenu within the menu for the user to choose options 1-4."

Newton's Second Law: 
F = ma
F = dp/dt
N = given input of m and a calculate N.
"Ask the user for the unit of measure for m and a and append those
values to the answer. Ex.) N = kg m/s^2."

Weight (Earth):
W = mg
W = given input of m and g calculate W.
"Ask the user for the expected measure output and append those
values to the answer. Ex.) lbs, stone."

Momentum:
p = mv
p = given input of m and calculate P.
"Ask the user for the expected measure out and append those values to
the answer. Ex.) [kg m/s]."

Additionally:
1.) Certainly, the use of functions is a much more efficient way 
to implement this work. Functions will be expected for max points.
2.) Echo to the user each time the values that he/she inputted and 
the result. Don't just show a result. Show the result in the context 
of the formula being used.
3.) Show the menu with each loop.
4.) Loop until E or e input.
5.) Test your program with multiple decisions, and multiple values. 
You might perhaps look for an online Calculator to test the accuracy 
of your information being presented. 
6.) Set the precision of the outputted numbers to 4 decimals places. 
Hint: iomanip library.
7.) Add color to enhance the program. i.e. of the output results.
8.) Add option “clear” that enables Dr_T to clear the screen on-demand 
#include<stdtlib> system(“cls”);
9.) Can you prevent the user from breaking your program if they 
enter an alphabetical character instead of a number…? 
If not, your points will be reduced on this program.
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void PhysicsCalculator();

int main()
{

system("Color 02");

// Velocity.
double ds;
string dsUnits;
double dt;
string dtUnits;
double v = ds/dt;
cout << "Enter ds value and unit of measurement: "; 
cin >> dsUnits;
cout << "Enter dt value and unit of measurement: "; 
cin >> dtUnits;
std::cout << std::setprecision(4) << v << endl;
cout << v << dsUnits << "/" << dtUnits << endl;

// Acceleration.
double dv;
string dvUnits;
double a = dv/dt;
cout << "Enter dv value and unit of measurement: "; 
cin >> dvUnits;
cout << "Enter dt value and unit of measurement: "; 
cin >> dtUnits;
std::cout << std::setprecision(4) << a << endl;
cout << a << dvUnits << "/" << dtUnits << endl;

// Motion. Just the enter number options. No variable statements needed.
char enter;
cout << "If you would like to calculate motion, then please choose from the following options:";
cout << "Enter 1 for first equation of motion: v = v0 + at";
cout << "Enter 2 for second equation of motion: s = s0 + v0t + 1/2at^2";
cout << "Enter 3 for third equation of motion: v^2 = v0^2 + 2a(s - s0)";
cout << "Enter 4 for fourth equation of motion: v = 1/2(v + v0)";
cin >> enter;

switch(enter)
{
    case 1:
    FirstEquation(v = v0 + at);
    break;

    case 2: 
    SecondEquation(s = s0 + v0t + 1/2at^2);
    break;

    case 3:
    ThirdEquation(v^2 = v0^2 + 2a(s - s0));
    break;

    case 4:
    FourthEquation(v = 1/2(v + v0));
    break;

    default:
    cout << "Invalid number was entered." << endl;
}

// Not correct. Ignore. Here for presentation purposes.
double x;
string xUnits;
double y;
string yUnits;
double m = x*y;
std::cout << std::setprecision(4) << m << endl;
cin >> "Enter value for first variable and unit of measurement" >> x >> endl;
cin >> "Enter value for second variable and unit of measurement" >> y >> endl;

// Newton's Second Law.
double dp;
string dpUnits;
double f = dp/dt;
cout << "Enter dp value and unit of measurement: "; 
cin >> dpUnits;
cout << "Enter dt value and unit of measurement: "; 
cin >> dtUnits;
std::cout << std::setprecision(4) << f << endl;
cout << f << dpUnits << "/" << dtUnits << endl;

// Weight (Earth).
double m;
string mUnits;
double g;
string gUnits;
double w = m*g;
cout << "Enter m value and unit of measurement: "; 
cin >> mUnits;
cout >> "Enter g value and unit of measurement: "; 
cin >> gUnits;
std::cout << std::setprecision(4) << w << endl;
cout << w << mUnits << "*" << gUnits << endl;

// Momentum.
double v;
string vUnits;
double p = m*v;
cout << "Enter m value and unit of measurement: "; 
cin >> mUnits;
cin >> "Enter v value and unit of measurement: "; 
cin >> vUnits;
std::cout << std::setprecision(4) << p << endl;
cout << p << mUnits << "*" << vUnits << endl;
}


void PhysicsCalculator;
{

cout << "Velocity: " << "v̅ = Δs/Δt " << "or " << "v = ds/dt" << endl;

cout << "Acceleration: " << "a̅ = Δv/Δt " << "or " << "a = dv/dt" << endl;

cout << "Motion: " << "v = v0 + at " << "or " << "s = s0 + v0t + ½at2 " << "or " << "v2 = v02 + 2a(s − s0) " << "or " << "v̅ = ½(v + v0)" << endl;

cout << "Newton's 2nd Law: " << "or " << "∑F = ma" << "or " <<  "∑F = dp/dt  " << endl;

cout << "Weight (Earth): " << "w = mg" << endl;

cout << "Momentum: " << "p = mv" << endl;
}