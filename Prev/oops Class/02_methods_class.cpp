#include <bits/stdc++.h>
using namespace std;
class Marvel{
    public:
    // Function inside
    void ListofHero(){
        cout<<"Spiderman"<<endl;
        cout<<"Ironman"<<endl;
        cout<<"Thor"<<endl;
        cout<< "Hulk"<<endl;
    }
    // we can write parametrised function here too
};
class Bollywood{
    public:
    // Function outside
    void ListofHero();
    // parameterised function
    void ListofNepokids(string parents);
};
void Bollywood::ListofHero(){
    cout<<"Shahrukh"<<endl;
    cout<<"Salman"<<endl;
    cout<<"Aamir"<<endl;
    cout<<"Ranbir"<<endl;  
}
void Bollywood::ListofNepokids(string parents ){
    cout << endl << "Name :"<< parents << endl;
    if (parents == "jacky")
    {
        cout << "Son :"<< "Tiger"<< endl;
    }
    // likewise 
}

int main() {
    Marvel hero;
    hero.ListofHero();
    cout << endl;
    Bollywood BollywoodHero;
    BollywoodHero.ListofHero();
    BollywoodHero.ListofNepokids("jacky");
    return 0;
}