#include <bits/stdc++.h>
using namespace std;
class Marvel{
    public:                         //public specifier
        string name;
    
    private:                        // private specifier
        string girlfriend;

};

class MyClass {
// default : private
    int x;   
    int y;   
};
int main() {
    Marvel hero;
    // publically available
    hero.name = "Spiderman";
    cout << hero.name << endl;
    // private matter
    //hero.girlfriend = "Mary Jane"; // error  (can't access these)
    return 0;
}

/*
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
*/