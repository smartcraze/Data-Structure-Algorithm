#include <bits/stdc++.h>
using namespace std;
//merge algorithm
void merge(vector<int> &arr, int left, int mid, int right){
    vector<int> tem;
    int i = left;
    int j = mid + 1;
    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            tem.push_back(arr[i]);
            i++;
        }else{
            tem.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        tem.push_back(arr[i]);
        i++;
    }
    while(j <= right){
        tem.push_back(arr[j]);
        j++;
    }
    for(int i = left; i <= right; i++){
        arr[i] = tem[i - left];
    }

}

// mergsort algorithm
void mergs_sort(vector<int> &arr, int left ,int right){
    if(left >= right){
        return;
    }
    int mid = left + (right - left) / 2;
    mergs_sort(arr, left, mid);
    mergs_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
    
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergs_sort(arr, 0, n-1);
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}