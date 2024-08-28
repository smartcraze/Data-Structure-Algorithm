#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    // vector<int> v(n);
    int v[n];
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int pos;
    cin >> pos;
    int x;
    cin >> x;
    
    // v.insert(v.begin()+pos, x);
    for(int i=n; i>pos; i--) {
        v[i] = v[i-1];
    }
    v[pos] = x;
    n++;
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}