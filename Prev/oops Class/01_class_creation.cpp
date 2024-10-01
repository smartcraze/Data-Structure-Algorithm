#include <bits/stdc++.h>
using namespace std;
class Marvel{                  // class Marvel
    public:                   // Access speacifier
    string Name;              // Attributes (string variable)
    string power;
    string weakness;
    string superpower;
};
int main() {
    Marvel Hero;                // creating object 
    Hero.Name = "Spiderman";    // assigning values to attributes
    Hero.power = "Web";
    Hero.weakness = "Spider";
    Hero.superpower = "Spider Sense";
    cout << "Name: " << Hero.Name << endl;
    cout << "Power: " << Hero.power << endl;
    cout << "Weakness: " << Hero.weakness << endl;
    cout << "Superpower: " << Hero.superpower << endl;
//-----------------------------------------------------------------
    Marvel villan;                // creating object
    villan.Name = "Green Goblin";    // assigning values to attributes
    villan.power = "Goblin Glider";
    villan.weakness = "Spiderman";
    villan.superpower = "Goblin Glider";
    cout << endl << "Name: " << villan.Name << endl;
    cout << "Power: " << villan.power << endl;
    cout << "Weakness: " << villan.weakness << endl;
    cout << "Superpower: " << villan.superpower << endl;

    return 0;

}