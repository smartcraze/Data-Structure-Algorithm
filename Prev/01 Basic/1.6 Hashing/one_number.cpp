#include <bits/stdc++.h>
using namespace std;
int main() {
    // taking input
    int n;
    cin >> n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
// precompute
// hash array is ready

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetching
        cout<< hash[number] << endl;
        

    }
    return 0;
}









