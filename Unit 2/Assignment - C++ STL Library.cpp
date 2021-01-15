// Student: Griffin Gowdey.
// Instructor: Tyson McMillan.
// Class Number: COSC1437-58003.
// Class Name: Programming Fundamentals II.
// Semester: Fall 2020.
// Assignment: C++ STL Library.

/*
Vectors:
Given the attached resource: Part 1 - C++ Standard Library.pdf
Write the base code for: 5. std::vector example.

Expand this code to:
- Add 3 elements to the vd vector.
- Add 3 elements to the vi vector.
- Add 3 elements to the vs vector.
- Display the 3 elements in the vd vector.
- Display the 3 elements in the vi vector.
- Display the 3 elements in the vs vector.


Vector as Class Member:
https://www.geeksforgeeks.org/passing-vector-constructor-c/
In the above, we learn to make a vector as a member of a class and 
pass it to the constructor. 
Combine the 3 class examples in the above into one program, and instantiate 
the respective classes in one program within in main().
You simple duty: combine these three working programs into one working program. 
Where GeekForGeek calls the first example "MyClass", you call it 
"MyClassVector1" ...MyClassVector2, so that all of your examples can be on one file.
Give GeekForGeek credit in the comments. 

The default access modifier in C++ is private. That is, if you 
do not declare member variables as private, the compiler will assume private.

class MyClass {

     vector< int >& vec; //considered private

class MyClass {

    private:

     vector< int >& vec; //our style to make the abundantly clear.


STL Iterators:
Return to the resource: Part 1 - C++ Standard Library.pdf and write the 
base code for: 11. STL Iterators.
Expand the code to display 10 elements.
Given the attached resource: Part 2 - C++ Standard Library.pdf 


Stack:
Write the code as presented in: 2. std::stack.
Write comments that help one better understand what the code is doing.


Set:
Write the code as presented in: 3. std::set.
Write comments that help one better understand what the code is doing.


Pair Structure:
Write the code as presented in: 4. std::pair structure.
Write comments that help one better understand what the code is doing.


Map Insert:
Write the code as presented in: 14. std::map::insert.
Write comments that help one better understand what the code is doing.


Map Summary:
Write the code as presented in: 16. Map summary.
Write comments that help one better understand what the code is doing.


Sort Algorithm:
Write the code as presented in: 23. sort example.
Write comments that help one better understand what the code is doing.


Predicate Algorithm:
Write the code as presented in: 25. count_if and predicate function.
Write comments that help one better understand what the code is doing.
*/

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>
#include <map>
using namespace std;

// For Map Insert section.
typedef map<string, int> Mapt;
typedef MapT::const_iterator MapIterT;


// Credit: https://www.geeksforgeeks.org/passing-vector-constructor-c/. 
// Clarifications added.
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  // Parameterized constructor.
      { 
        vec = v; 
      } 
      void print() 
      { 
          // Print the value of vector. 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

int main(int argc, char* argv[]) 
{

    // Vector. 
    vector<double> vd; // vd elments are floating point numbers.
    vector<int> vi; // vi elements are integer numbers. 
    vector<string> vs; // vs elements are string objects. 

    // Expand this code to:
    // Add 3 elements to the vd vector.
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);

    // Add 3 elements to the vi vector.
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    
   // Add 3 elements to the vs vector.
    vs.push_back(1);
    vs.push_back(2);
    vs.push_back(3);

   // Display the 3 elements in the vd vector.
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

    // Display the 3 elements in the vi vector.
    cout << "\nValues in vi: \n"; 
    for(int vals : vd)
    {
     cout << vals << endl; 
    }
    cout << "\nAnother way to print vector: " << endl; 
    for(int i = 0; i < vi.size(); i++)
    {
     cout << vi[i] << endl; 

    // Display the 3 elements in the vs vector.
    cout << "\nValues in vs: \n"; 
    for(string vals : vd)
    {
     cout << vals << endl; 
    }
    cout << "\nAnother way to print vector: " << endl; 
    for(int i = 0; i < vd.size(); i++)
    {
     cout << vd[i] << endl; 
    }


    // Vector as Class Member. 
    // Credit: https://www.geeksforgeeks.org/passing-vector-constructor-c/.
    cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      // Continue with MyClassVector2 and MyClassVector3.
        vector<int> vec; 
            for (int i = 2; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector2 obj(vec); 
        obj.print();

        vector<int> vec; 
            for (int i = 3; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector3 obj(vec); 
        obj.print();


    // STL Iterators.
    cout << "\nSTL_Iterators" << endl; 
    vector<int> vec; // Vector with 3 integer numbers.
    // Expand the code to display 10 elements of the vector.
    vint[0] = 10;
    vint[1] = 20;
    vint[2] = 30;
    vint[3] = 40;
    vint[4] = 50;
    vint[5] = 60;
    vint[6] = 70;
    vint[7] = 80;
    vint[8] = 90;
    vint[9] = 100;

    vector<int>::iterator it;
    for (it = vint.begin(); it != vint.end(); ++it) 
    {
        /* Like pointer, iterator is dereferenced to access 
        the value of the element pointed by it. */ 
        cout << "" << *it;
    }
    // Output: 10 20 30.


    // Stack.
    /* A stack is a container that permits to insert and extract
    its elements only from the top of the container. */
    stack<int> st;

    st.push(100); // Push number on the stack.
    assert(st.size() == 1 ); // Verify one element is on the stack. 
    assert(st.top() == 100); // Verify element value.

    st.top() = 456; // Assign new value. 
    assert(st.top() == 456);

    st.pop(); // Remove element. 
    assert(st.empty() == true);


    // Set.
    /* A set is a container that hold unique elements. The elements
    in std::set are always stored. */
    set<int> iset; // Set of unique integer numbers.

    iset.insert(11); // Populate set with some values.
    iset.insert(-11);
    iset.insert(55);
    iset.insert(22);
    iset.insert(22);

    if (iset.find(55)! = iset.end()) 
    { // Is value already stored?
        iset.insert(55);
    }
    assert(iset.size() == 4); // Sanity check.
    set<int>:: iterator it;
    for (it = iset.begin()); it! = iset.end(); it++) 
    {
        cout << "" << *it;
    }
    // Output: -11 11 22 55.


    // Pair Structure.
    /* 
    A pair is a C++ structure that holds one object of type T1
    and another one of type T2.
    A pair is much like a container that holds exactly two elements.
    The pair is defined in the standard header named utility.
    */

    pair<string, string> strstr;
    strstr.first = "Hello";
    strstr.second = "World";

    pair<int, string> intstr;
    intstr.first = 1;
    intstr.second = "one";

    pair<string, int> strint("two, 2");
    assert(strint.first == "two");
    assert(strint.second == "2");
    

    // Map Insert.
    // Use insert() to put in a new item only if it isn't there.
    MaptT amap;
    pair<MapIterT, bool> result =
        amap.insert(make_pair("Fred", 45));

    assert(result.second == true);
    assert(result.first -> second == 45);

    result = amap.insert(make_pair("Fred", 54));

    /* Fred was already in the map, and result.first 
    simply points there now. */
    assert(result.second == false);
    assert(result.first->second == 45);


    // Map Summary.
    /*
    A map is a container that holds unique pairs of keys and values.
    The elements in std::map are always sorted by its keys.
    Each element of the map is formed by the combination of the key
    value and a mapped value.
    Map iterators access both the key and the mapped value at the
    same time.
    */

    map<string, string> phone_book; 
    phone_book["411"] = "Directory"; 
    phone_book["911"] = "Emergency"; 
    phone_book["508-678-2811"] = "BCC";
    if (phone_book.find("411")!= phone_book.end() ) 
    { 
        phone_book.insert(
            make_pair(
                string("411"),
                string("Directory")
            )
        );
    }
    assert(phone_book.size() == 3);
    map<string, string>::const_iterator it;
    for (it = phone_book.begin(); it != phone_book.end(); ++it) 
    { 
        cout
            << "" << it -> first
            << "" << it -> second
            << endl;
    }
    /* Output:
    411 Directory 
    508‐678‐2811 BCC 
    911 Emergency
    */


    // Sort Algorithm.
    int arr[100];
    sort(arr, arr + 100);
 
    vector v1;
    sort(v1.begin(), v1.end() );


    // Predicate Algorithm.
    // Also included std::count_if.
    bool less_than_7(int value)
    {
        return value < 7;
    }

    vector<int> v1;
    int count_less = std::count_if(v1.begin(), v1.end(), less_than_7);

// End.                       
      return 0; 
}