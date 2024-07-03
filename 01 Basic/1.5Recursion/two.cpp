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
// parametrised one
void sum3(int i, int sum)
{
    // base case
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    sum3(i - 1, sum + i);
}
// functional ways
int sum4(int n)
{
    if (n == 0)
        return 0;
    return n + sum4(n - 1);
}

// reverse a array
void reverse(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
//  recursive way
void reverse2(int arr[], int i, int j){
    if(i>=j){
        return;
        }
        swap(arr[i], arr[j]);
        reverse2(arr, i+1, j-1);
}

// palindrome check using the recursion 
// string on reversal reach the same is known as the palindrome 
bool isPalindrome(int i,string &s){
    if(i>=s.length()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return isPalindrome(i+1,s);
}

// Multiple function call in recursion


int fibonacci(int n){
    if(n<=1) return n;
    int last =fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;


}

int main()
{
    int n;
    cout << "enter the no: ";
    cin >> n;
    // sum(n);
    // sum2(n);
    // sum3(n, 0);
    // sum4(n);
    // reverse();
    // string s ="madam";
    // cout<<isPalindrome(0,s);
    cout << fibonacci(n);
    return 0;
}