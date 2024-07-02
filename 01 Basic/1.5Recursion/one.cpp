#include <bits/stdc++.h>
using namespace std;

// print one 5 times
int cnt = 1;
int one(){

    if(cnt==5){
        cout << "5" << endl;
        return 0;
    };
    cout << cnt << "one" <<endl;
    cnt++ ;
    one();
}

// print name N times using the Recursion 
void name(int i,int n){
    if (i>n) return;
    cout << "Suraj vishwakarma" << endl;
    name(i+1,n);
}

// counting the no
void countNo(int i,int n){
    if(i>n) return ;
    cout << i << endl;
    countNo(i+1,n);
}

// opposite print
void OppCount(int i , int n){
    if (i<1) return;
    cout << i << endl;
    OppCount(i-1,n);

}



// backtraking recursive call
void backTrack(int i,int n){
    if (i<1) return;
    backTrack(i-1,n);
    cout << i << endl;

}
// print the prime no in backward using backt tacking 
int checkprime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


// void Backprime(int n){

// }

int main() {
    // part 2;
    int n;
    cout << " input: ";
    cin>>n;
    // one();
    // name(1,n);
    // countNo(1,n);
    // OppCount(5,n);
    // backTrack(n,n);
    // Backprime();
    checkprime(n);




    return 0;
}