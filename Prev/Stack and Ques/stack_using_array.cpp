
#include<bits/stdc++.h>
using namespace std;
#define max 1000
class stack{
    int top;
    public:
    int arr[max];
    stack{
        top = -1;
    }
    bool push(int value){
        if(top >= (max - 1)){
            cout << "stacked overflow";
            return false;
        }
        else{
            arr[++top] = value;
            cout <<value << "value pushed into stack";
            return true;

        }
    }
    int pop(){
        if(top < 0){
            cout << "Stack underflow";
            return 0;
        }
        else{
            int val = arr[top --];
        }
    }

}