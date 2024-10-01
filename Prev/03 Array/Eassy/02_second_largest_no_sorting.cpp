#include <bits/stdc++.h>
using namespace std;
// finding the second largest and not by using sorting 

int Find_second_largest(int *arr,int n){
    int max = arr[0];
    int second_max ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            second_max =max;
            max = arr[i];
        }else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
        
    }
    return second_max;



}

int main() {
    int n;
    cout << "Input Size of Array :";
    cin  >> n;
    int arr[n];
    cout << "Input elemts " << n << " ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int second_max =Find_second_largest(arr,n);
    cout << second_max;

    return 0;
}