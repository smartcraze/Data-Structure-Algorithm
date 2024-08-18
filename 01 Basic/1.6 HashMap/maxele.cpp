#include <bits/stdc++.h>
using namespace std;

int maxelement(int *arr, int n) {
    unordered_map<int, int> mp;
    int maxElement = 0;
    int maxfreq = 0;

    // Counting frequency of each element
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Finding the element with the maximum frequency
    for (auto i : mp) {
        int element = i.first;
        int frequency = i.second;
        cout << "Element: " << element << " Frequency: " << frequency << endl;

        if (frequency > maxfreq) {
            maxfreq = frequency;
            maxElement = element;
        }
    }

    return maxElement;
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = maxelement(arr, n);
    cout << "Max Element is: " << res << endl;

    return 0;
}
