#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // precompute

    map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // iteration in the map
    for (auto it : hash)
    {
        cout << it.first << " --> " << it.second << endl;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number];
    }

    return 0;
}






// commments

/*

map store only the element there in the array
so we dont have to store all the number unlike number hashing using array
so for the big number we use map
mao always stores the number in the ssorted order




 */