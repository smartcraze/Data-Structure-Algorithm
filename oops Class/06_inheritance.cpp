#include <bits/stdc++.h>
using namespace std;
// base class
class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut! \n";
    }
};

// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

// Multi level inheritance
//  Base class(parent) class MyClass
class MyClass
{
public:
    void myFunction()
    {
        cout << endl
             << "Some content in parent class.";
    }
};

// Derived class (child)
class MyChild : public MyClass
{
};

// Derived class (grandchild)
class MyGrandChild : public MyChild
{
};

// Another base class
class MyOtherClass
{
public:
    void myOtherFunction()
    {
        cout << "Some content in another class.";
    }
};

// Derived class
class MyChildClass : public MyClass, public MyOtherClass
{
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    MyGrandChild myObj;
    myObj.myFunction();
    MyChildClass myObj1;
    myObj1.myFunction();
    myObj1.myOtherFunction();
    return 0;
}