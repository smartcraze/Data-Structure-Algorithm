#include <bits/stdc++.h>
using namespace std;
// basic way of solving with big oh n tc
void sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}

// using the formula
void sum2(int n)
{
    int sum = (n * (n + 1)) / 2;
    cout << sum << endl;
}

// Recursive way of calculating the sum of first N Natural Numbers:
void sum3(int i, int sum)
{
    // base case
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    sum3(i - 1, sum+i);
}
int main()
{
    int n;
    cout << "enter the no: ";
    cin >> n;
    // sum(n);
    // sum2(n);
    sum3(n, 0);
    

    return 0;
}