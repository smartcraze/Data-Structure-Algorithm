#include <bits/stdc++.h>
using namespace std;
void commonelement(int arr[], int arr2[], int n, int m) {
    int i= 0 ;
    int j = 0;
    while (i < n && j < m) {
        if (arr[i] == arr2[j]) {
            cout << "Common Element : " <<  arr[i] << " ";
            i++;
            j++;
        } else if (arr[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    
     
    
}
int main() {
    int n,m;
    cin >> n >> m;
    int arr[n];
    int arr2[m];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    commonelement(arr, arr2, n, m);
    return 0;
}
