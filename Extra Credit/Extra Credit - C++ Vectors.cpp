// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Extra Credit: C++ Vectors.

/* 
Prompt the user to enter five numbers, being five people's weights. Store the
numbers in a vector of doubles. Output the vector's numbers on one line, each
number followed by one space.

Also output the total weight, by summing the vector's elements.
Also output the average of the vector's elements.
Also output the max vector element.
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() 
{
    vector<double> weights;
    double x;
    int i = 0;

for (i = 0; i < 5; i++)
    {
    cout << "Enter weight " << i + 1 << ": " << endl;
    cin >> x;
    weights.push_back(x);
    }

cout << "You entered: ";
for (i = 0; i < 5; i++)
    {
    cout << fixed << setprecision(2) << weights.at(i) << " ";
    }
cout << "\n" << endl;

double total_weight = 0;
for (i = 0; i < 5; i++)
    {
    total_weight = total_weight + weights.at(i);
    }
cout << "Total weight: " << total_weight << endl;

double average_weight;
average_weight = total_weight/weights.size();
cout << "Average weight: " << total_weight/weights.size() << endl;
  
double max_weight = -2000;
for (i = 0; i < 5; i++)
{
    if (max_weight < weights.at(i))
    {
        max_weight = weights.at(i);
    }
}
  
cout << "Max weight: " << max_weight << endl;

return 0;
}