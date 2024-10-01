#include <bits/stdc++.h>
using namespace std;
// Encapsulation : sensitive

class Boys{
    private:
        int Salary;
        string girlfriend;   // very sensitive Binode bhai 
    public:
        // setter : informer
        void Setdetails(int s,string gf){
            Salary = s;
            girlfriend = gf;
        }
        //getter : hackers bhai
        pair<int,string> getdetails(){
            return {Salary, girlfriend};
            
        }

};

int main() {
    Boys Binod;
    Binod.Setdetails(50000, "Bindiya");
    pair<int,string> details = Binod.getdetails();
    cout << "Salary: " << details.first << ", Girlfriend: " << details.second << endl;
    
    return 0;
}