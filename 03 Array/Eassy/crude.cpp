#include <bits/stdc++.h>
using namespace std;
// insert element
void insert_element(int arr[],int n,int k){
    arr[n]=k;
    for (int i = 0; i < n+1; i++)
    {
        cout << arr[i] << " ";
    }

}

// insert at position
void insertatposition(int arr[],int n){
    

}
// delete last element 
void deleteLastElement(int arr[],int n){

}
// delelete specific element
void deletePositionElement(int arr[],int n){

}
// update element
void updateelement(int arr[],int n){

}

int main() {
    int n;
    cout << "Input Size of Array :";
    cin  >> n;
    int arr[n];
    cout << "Input elemts " << n << " :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // insert element at last position
    insert_element(arr,n,199);
    // insertatposition(arr,n);
    // deleteLastElement(arr,n);
    // deletePositionElement(arr,n);
    // updateelement(arr,n);

    return 0;
}