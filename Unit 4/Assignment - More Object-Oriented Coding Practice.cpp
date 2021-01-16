// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Assignment: More Object Oriented Coding Practice.

/*
Using C++ Object Oriented classes to create a Football
Scoreboard.

First, decide which method you will use for class declarations 
in this project Scope Resolution or alternative--either is 
fine, but once you commit, run with it. 

Your objective is to create C++ program that keeps track of 
various objects and variables in a Football Scoreboard.

Create a C++ Object Oriented Class called Team. A team has 
member variables:
*Name
*Coach_Name
*Home_City
*Home_Status (bool true or false; if true, Home Team, 
if false, visitor)
*Score (holding the current score)
*Timeout_Count

Write the appropriate setter and getter member functions 
for the Team Class.

Create a class called Scoreboard.

Write the appropriate member variables, setter functions, 
and getter functions to make the scoreboard work.

In int main():
*Create 2 instances of the Team Class (Objects) (any two 
teams you like, any home team set you like).
*Show the scoreboard with the various values initialized to zero
*Make the scoreboard functional and able to be updated with 
your input from the keyboard.

Tier 1 Extra challenges: 
*Show the Team Name and City on your Scoreboard.
*Define the Classes in a .h file, and refer to them in int main(). 
This is a more clean design. 
*Any thoughts on how to get the clock to work, set, reset, start, stop...?  

Tier 2 Extra challenges:  
*If Team T1 and Team T2 are members of the Scoreboard Class.
*Can we unify the Scoreboard class to have Team classes as members?  
*See perhaps: http://www.cplusplus.com/ forum/general/67828/
 
I want to be able to declare statements in int main() like so...

Scoreboard s1; //assuming T1 and T2 as public members

s1.T1.setName("Dallas Cowboys"); 
s1.T2.setName("Houston Texans");   

Scoreboard s1; //assuming T1 and T2 as private members passed 
as parameters accessed with setters and getters

s1.Team1().setName("Dallas Cowboys"); 
s1.Team2().setName("Houston Texans"); 
*/

#include <iostream>
#include <string> 
#include <unistd.h>
using namespace std; 

class Team 
{
  private:
    string Name, Coach_Name, Home_City;
    bool Home_Status;
    int Score, Timeout_Count;

  public:
      Team()
      {
        Name = "";
        Coach_Name = "";
        Home_City = "";
        Home_Status = true; //Home = true. Visitor = false.
        Score = 0; 
        Timeout_Count = 0; 
      }
      void setName(string N) {Name = N;}
      void setCoach_Name(string C_N) {Coach_Name = C_N;}
      void setHome_City(string H_C) {Home_City = H_C;}
      bool getHome_Status() const {return Home_Status;}
      int getScore() const {return Score;}
      int getTimeout_Count() const {return Timeout_Count;}
};

class Scoreboard
{
  private:
    int Quarter; 
    Team Home;
    Team Visitor; 
  public: 
    Scoreboard()
    {
      Quarter = 0; 
    }  
    void setQuarter(int Q) {Quarter = Q;}
    void setHome(Team HomeSet) {Home = HomeSet;}
    void setVisitor(Team VisitorSet) {Visitor = VisitorSet;}
    int getQuarter() const {return Quarter;}
    Team getHome() const {return Home;}
    Team getVisitor() const {return Visitor;}
    void showScoreboard()
    {
      string color = ""; 
      string reset = "\x1b[0m";
      color = "\x1b[30m";
      string score = "\x1b[33m";
      cout << color << "Football Scoreboard - Griffin Style" << reset << endl; 
      cout << home.getName() << "\t\t" << visitor.getName() << endl; 
      cout << score << home.getScore() << reset << "\t\t" << visitor.getScore() << endl; 
    }
};

int main() 
{
  Scoreboard s;
  Team tOne = "Dallas Cowboys";
  Team tTwo = ""; 
  string newName = ""; 
  string userChoice = ""; 
  int newScore = 0; 

  // Seting the home team. 
  tOne.setHome_Status(true); //tOne (Dallas Cowboys) is the Home Team now.   

  // Adding some initial data to s.
  s.setHome(tOne);
  s.setHome_City("Dallas");
  s.setVisitor(tTwo);

  do 
  {
      system("clear"); // Clearing the screen of previous content. 
      s.showScoreboard(); // Showing the current scoreboard data.

      // Updating the visiting team since we've already established Cowboys as home team.
      cout << "A = Update Visitor Team Name" << endl; 
      cout << "B = Update Visitor Team Score" << endl; 
      cout << "E = Exit" << endl;
      cout << ">"; 
      cin >> userChoice; 

      if (userChoice == "A" || userChoice == "a")
      {
        cout << "****Update Visiting Team Score module*** " << endl; 
        cout << "\nPlease enter a new name for the visiting team: ";
        cin >> newName; 
        // Changing the visiting team's name.
        tTwo.setName(newName); // Set tTwo's data to the visiting team.
      }
      else if (userChoice == "B" || userChoice == "b")
      {
        cout << "\nUpdate Visiting Team Score Module****" << endl; 
        cout << "\nPlease enter a new score for the visiting team: "; 
        cin >> newScore; 
        tTwo.setScore(newScore);  // Setting the new score for the visiting team.        
      }
      else if (userChoice == "E" || userChoice == "e")
      {
        cout << "Exit chosen." << endl; 
      }
      else // Invalid input: default clause.
      {
        cout << "\nInvalid input." << endl; 
        sleep(2); 
      }

      s.setVisitor(tTwo); // Refreshing the data in s to the new visiting team updates.
  
  }
  while(userChoice != "E" && userChoice != "e");

  return 0; 
}