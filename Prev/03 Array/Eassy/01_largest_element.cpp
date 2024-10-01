#include <bits/stdc++.h>
using namespace std;
//Brute Force approach 
void Largest_element_sort(int *arr,int n){
    // sort the array and get last value
    sort(arr,arr+n);
    cout << arr[n-1] << endl;


}
// we can do for loop to do 

int Largest_element(int *arr,int n){
    int largest =arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest =arr[i];
        }
        
    }
    return largest;
    
}
// recursive way


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
    int largest = Largest_element(arr,n);
    cout << "Largest element is " << largest << endl;

    return 0;
}









/*


Example 1:
Input:
 arr[] = {2,5,1,3,0};
Output:
 5
Explanation:
 5 is the largest element in the array. 

Example2:
Input:
 arr[] = {8,10,5,7,9};
Output:
 10
Explanation:
 10 is the largest element in the array. 

*/