// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Assignment: Multi-Dimensional Arrays.

/*
Go to http://weather.com and pick two cities of your choice. Create a 
data table and fill in the temperature as values for the array.

Access the values from the array and create a one dimensional array, 
cityOne[7] to store the 7 temperatures of city 1, assume that value 0 
represents day 1, 1 represents day 2...

and...

create a one dimensional array, cityTwo[7] to store the 7 temperatures 
of city 2, assume that value 0 represents day 1, 1 represents day 2....

Using a for loop (or nested for loop), feed the data of CityOne[] and 
CityTwo[] into temperature[i][j], where i is index of the City Number, 
and j is the index of the temp for the day.

Print the results of temperature[i][j]; to the screen.
*/

#include <iostream>
using namespace std;

// Data table.
// City 1 is Naples, FL and City 2 is Naples, IT.
City 1, Day 1: 84
City 1, Day 2: 86
City 1, Day 3: 83
City 1, Day 4: 84
City 1, Day 5: 85
City 1, Day 6: 85
City 1, Day 7: 84
City 2, Day 1: 70
City 2, Day 2: 70
City 2, Day 3: 68
City 2, Day 4: 66
City 2, Day 5: 67
City 2, Day 6: 67
City 2, Day 7: 65

int main()
{
      const int CITY = 2;
      const int WEEK = 7;

    int temperature[CITY][WEEK];
    cout << "Enter all temperature for a week of first city and then second city.\n";

    // Inserting the values into the temperature array.
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

    // Accessing the values from the temperature array.
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
            cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }

    /*
    Creating a one dimensional array of cityOne[7] to store the 7 temperatures 
    of city 1, assume that value 0 represents day 1, 1 represents day 2....
    */
        const int CITY = 1;
        const int WEEK = 7;
        
            for (int i = 0; i < CITY; ++i)
            {
                for (int j = 0; j < WEEK; ++j)
                {
                cout << "Naples, Florida " << i + 1 << ", Day " << j + 1 << " Temperature: "
                cin >> temperature[i][j];
                }
            }

            cout << "\n\nDisplaying Values:\n";

    /*
    Creating a one dimensional array named cityTwo[7] to store the 7 temperatures 
    of city 2, assume that value 0 represents day 1, 1 represents day 2....
    */
        const int CITY = 2;
        const int WEEK = 7;

            for (int i = 0; i < CITY; ++i)
            {
                for (int j = 0; j < WEEK; ++j)
                {
                cout << "Naples, Italy " << i + 1 << ", Day " << j + 1 << " Temperature: "
                cin >> temperature[i][j];
                }
            }

             cout << "\n\nDisplaying Values:\n";

      /*
      Using a nested for loop to feed the data of CityOne[] and CityTwo[] 
      into temperature[i][j], where i is index of the City Number, and j is the index 
      of the temp for the day.
      */
      for (int i = 0; i < CITY; i++)
      {
        for (int j = 0; j < WEEK; j++)
        {
            if (i == 0)
            {
            temperature[i][j] = NaplesFL[j];
            }
        else if (i == 1)
            {
           temperature[i][j] = NaplesIT[j];
            }
        }
      }

      // Printing the results of temperature[i][j]; to the screen.
      for (int i = 0; i < CITY; i++)
      {
        for (int j = 0; j < WEEK; j++)
        {
            if (i==0)
            {
            cout << "Naples, FL " << j + 1 << " = " << temperature[i][j] << endl; 
            }
        else if (i==1)
            {
            cout << "Naples, IT " << j + 1 << " = " << temperature[i][j] << endl; 
            }
        }
      }

    return 0;
}