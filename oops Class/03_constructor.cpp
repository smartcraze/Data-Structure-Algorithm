#include <bits/stdc++.h>
using namespace std;
/*
A constructor in C++ is a special method that is automatically called when an object of a class is created.
To create a constructor, use the same name as the class, followed by parentheses ():

Note: The constructor has the same name as the class, it is always public, and it does not have any return value.
*/

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

class Vehicle{
    public:
    string brand;
    string model;
    int year;

    Vehicle(string x ,string y,int z);
};
// contructor outside the class
Vehicle::Vehicle(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}


int main() {
    MyClass myObj;    //(this will call the constructor)
    cout << endl;
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}