#include <iostream>
using namespace std;

// Selection sort
void selection_sort(int n, int arr[]) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
void bubble_sort(int n,int arr[]){
    for(int i=n-1;i>=0;i--){
        // optimise
        int didswap =0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0) break;
    }
}
//insertion sort

void insertion_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int j=i;
        while (j>=0 && arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    // worst tc--> o(n^2)
    // best tc--> o(n)
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
        cout << "Enter element";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // selection_sort(n, arr);
    // bubble_sort(n,arr);
    insertion_sort(arr,n);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
