// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Assignment: Vectors, Functions, Condition, Loops, Color, and Sorting Values.

/* 
Print a menu for the customer to order from.

Upon input of customer order and the receipt generation process:

1.) Accept tip (from user). Suggest 20% or more.
2.) Calculate total due + tax + tip.
3.) Accept payment type of credit card or cash.
4.) Accept tender amount from user.
5.) If paying with cash, then calculate change.
6.) If paying with card, then process payment.
7.) Generate receipt on the screen.
8.) Generate receipt to a text file.
9.) Loop program to start over for a new user.
10.) Add color to the menu to enhance output.
*/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
#include <windows.h>
using namespace std; 

// 0 for black background color. 7 for white text color.
system("Color 07")

class MenuItem
{
  private:
  string name;
  double itemCost; 
  string desc; 
  char addLetter; 
  char removeLetter;
  int count;

  public:
  MenuItem(string name, double itemCost, char addLetter, char removeLetter, string desc, int count)
  {
      name = name;
      itemCost = itemCost;
      addLetter = addLetter;
      removeLettter = removeLetter;
      desc = "Delicious!";
      count = 0;
  }

void populateMenu(vector<MenuItem> &);
void showMenu(vector<MenuItem> &);
void acceptOrder(vector<MenuItem> &);
void printReceipt(vector<MenuItem> &, double, double, double, double);

int main()
{
    char ordering = 'y';
    while (ordering == 'y')
    {
        ordering = 'n';
        vector<MenuItem> whileMenu;
        populateMenu(wholeMenu);
        showMenu(wholeMenu);
        acceptOrder(wholeMenu);
        cout << "\033[2J\033[1;1H"; // Clear screen. 
        ordering = getValidChar("What would you like to order?");
    }
    return 0;
}

// Function definitions.
void populateMenu(vector<MenuItem> &entireMenu)
{ 
  // Menu items.
  entireMenu.push_back(MenuItem("Taco", 4.00, 'A', 'a'));
  entireMenu.push_back(MenuItem("Burrito", 5.00, 'B', 'b'));
  entireMenu.push_back(MenuItem("Bowl", 6.00, 'C', 'c'));
  entireMenu.push_back(MenuItem("Quesadilla", 7.00, 'D', 'd'));
  entireMenu.push_back(MenuItem("Enchilada", 8.00, 'E', 'e'));
  entireMenu.push_back(MenuItem("Chimichanga", 9.00, 'F', 'f'));
  entireMenu.push_back(MenuItem("Fajitas", 10.00, 'G', 'g'))

  vector<string> defaultMenuNames = {"Taco", "Burrito", "Bowl", "Quesadilla", "Enchilada", "Chimichanga", "Fajitas"}; 
  vector<char> defaultAddLetters = {'A', 'B', 'C', 'D', 'E', 'F', 'G'}; 
  vector<char> defaultRemoveLetters = {'a', 'b', 'c', 'd', 'e', 'f', 'g'}; 

  for (int i = 0; i < numItems; i++)
  {
    // Adding each item to the default list efficiently.
    entireMenu[i].name = defaultMenuNames[i]; 
    entireMenu[i].addLetter = defaultAddLetters[i]; 
    entireMenu[i].removeLetter = defaultRemoveLetters[i]; 
    entireMenu[i].itemCost = (4.00 + i); // Seting a random starter cost for each item.
    entireMenu[i].count = 0; // Initializing all counts to 0.
    entireMenu[i].desc = "Delicious!"; // Setting all default desc to "Delicous!".
  }
}

void showMenu(vector<MenuItem> &m)
{
  cout << fixed << setprecision(2); // Set doubles to 2 decimal places.
  cout << "Griffin's Efficient Menu" << endl; 
  cout << "ADD  \tNAME \t COST \tREMOVE\tCOUNT\tDESC"<<endl;

  for (int i = 0; i < m.size(); i++)
  {
    cout << m[i].addLetter << ")" << setw(10) << m[i].name 
    << setw(5) << "$" << m[i].itemCost << setw(5) << "(" << m[i].removeLetter
    << ")" << setw(7) << m[i].count << setw(13) << m[i].desc 
    <<endl; 
  }
}

void acceptOrder(vector<MenuItem> &m)
{
  char option = '\0'; // The user-selected menu item.
  double subtotal = 0.0; 
  double tip = 0.0;
  bool paymentCredit = false;
  double payment = 0.0;
  double change = -1.0;

  do
  {
    cout << "\nPlease choose an item (x to Exit): ";
    cin >> option; 

    for (int i = 0; i < m.size(); i++)
    {
      if (option == m[i].addLetter)
      {
        cout << "\nMenu Item " << m[i].addLetter << " selected."; 
        m[i].count++; // Incrementing the count by 1
        cout << "\033[2J\033[1;1H"; // Clearing screen.
        cout << "\n1 UP on " << m[i].name << endl;
        subtotal += m[i].itemCost; // Incrementing the subtotal by the cost of the item.
        showMenu(m); // Showing the updated menu.
        cout << "\nSubtotal: $" << subtotal << endl;  
      }
      else if (option == m[i].removeLetter)
      {
        cout << "\nRemove Item " << m[i].removeLetter << " selected."; 
        if (m[i].count > 0) // Subtracting if and only if the count is > 0.
        {
          m[i].count--; // Decrementing the count by 1.
          cout << "\033[2J\033[1;1H"; // Clearing the screen.
          cout << "\n1 DOWN on " << m[i].name << endl;
          subtotal -= m[i].itemCost; // Decrementing the subtotal by the cost of the item.
          showMenu(m); // Showing the updated menu.
          cout << "\nSubtotal: $" << subtotal << endl;  
        }
        else // Telling the user why you blocked item removal. 
        {
            
            cout << "\nItem count must be > 0 to remove: " << m[i].name << endl;
        }
      }
      else if (
                option != m[i].addLetter && 
                option != m[i].removeLetter &&
                option != 'x' &&
                option != 'X' 
            ) // Testing for all of the valid inputs.
            {
              if (i == 0)
              {
                cout << "\nInvalid input (" << option << "). Please try again." << endl; 
              }  
            }
    }
  }
  while (option != 'x' && option != 'X');

  cout << fixed << setprecision(2); 

  cout << "Would you like to add a tip? (Enter .10 for 10%" << (subtotal * 0.10) << ", Enter .15 for 15%. " << (subtotal * 0.15) << "Please consider tipping 20% or more if you received exceptional service! " << "Enter .20 for 20%" << (subtotal * .20) << ", Enter .25 for 25%" << (subtotal * 0.25) << ", Enter .30 for 30%." << (subtotal * 0.30) << endl;
  tip = getValidDouble();
  
  cout << "\nThank you for placing your order." << endl;

  paymentCredit = getValidBool("Are you using cash or debit/credit card? (0 for cash, 1 for debit/credit card)");
  
      if (!paymentCredit)
      {
          while (change < 0)
          {
              payment = getValidDouble("How much cash are you using?: ");
              change = payment - ((subtotal + tip) * .0625)
              if (change < 0)
              {
                  cout << "More cash is needed." << endl;
              }
          }
      }
      printReceipt(m, subtotal, tip, payment, change);
}

void printReceipt(vector<MenuItem> &m, double subtotal, double tip, double payment, double change)
{
    double tax = ((subtotal + tip) * .0625);
    int final = 0;
    cout << "Receipt" << endl;
    for (size_t i = 0; i < m.size(); i++)
    {
        if (m[i].count > 0)
        {
            cout << setw(10) << m[i].name << setw(5) << "$" << m[i].itemCost << setw(7) << m[i].count << endl;
        }
    }

    cout << "Subtotal: " << subtotal << endl;
    cout << "Tip: " << tip << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total: " << subtotal + tip + tax << endl;
    cout << "Tender: " << (change < 0 ? "cash" : "debit/credit") << endl;

    if (change > 0)
    {
        cout << "Total amount of money paid: $" << payment << endl;
        cout << "Total amount of change: $" << change << endl;
    }
}

// Printing receipt to a text file.
int main ()
{
  ofstream printReceipt;
  printReceipt.open ("Receipt.txt");
  printReceipt << "Receipt Totals:" << endl;
  string printReceipt;
  return 0;
}

// Restart if needed and clearing program for new user.
void restart()
{
    cout << "Would you like to start over? Type Y for Yes. Type N for No."; 
    cin >> answer;

    if (answer == 'y' or answer == 'Y')
    goto restart();
}
}