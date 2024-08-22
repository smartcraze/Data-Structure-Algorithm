#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ,sub;
    cout << "Enter a number of students : ";
    cin >> n;
    cout << "Enter a number of subjects : ";
    cin >> sub;
    int arr[n][sub];
    for (int i = 0; i < n; i++) {
        cout << "Enter the marks of student " << i + 1 << " : ";
        for (int j = 0; j < sub; j++) {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    // percentage of each student
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < sub; j++) {
            sum += arr[i][j];
        }
        cout << "Percentage of student " << i + 1 << " : " << setprecision(2) <<(sum / sub) << "%" << endl;
    }






    return 0;
}