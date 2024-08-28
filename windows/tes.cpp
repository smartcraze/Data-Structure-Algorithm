#include <bits/stdc++.h>
using namespace std;

// void bubblesort(int arr[],int n){
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int max = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max]){
                max = j;
                swap(arr[max],arr[i]);
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    selectionsort(arr,n);
    
    cout << "Sorted array: ";
    for(int i=0;i<n;i++)cout << arr[i] << " ";
    
    cout << endl << "The second largest element is "<<arr[1];
    return 0;
}