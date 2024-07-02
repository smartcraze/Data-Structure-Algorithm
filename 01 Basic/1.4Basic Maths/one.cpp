#include <bits/stdc++.h>
using namespace std;

// counting the digit
int Count(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}
// reverse the Number
int Reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}
// palindrome Number;
int Palindrome(int n)
{
    int rev = Reverse(n);
    if (n == rev)
        return 1;
    else
        return 0;
}
void ArmstrongNo(int n)
{
    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit; // Calculate the cube of the digit
        n /= 10;
    }

    if (sum == original)
    {
        cout << original << " is an Armstrong number." << endl;
    }
    else
    {
        cout << original << " is not an Armstrong number." << endl;
    }
}

// print all the divisor
void printDivisor1(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
// optimise one
void printDivisor(int n)
{
    vector<int> ls;
    for (int i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (i != n / i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls) cout << it << " ";
}


// gcd and lcm 
void gcd(int n1,int n2){
    while (n1>0 && n2>0)
    {
        if (n1 > n2){
            n1 = n1 % n2;
        }else{
            n2 = n2 % n1;
        }

    }
    if(n1==0){
        cout << n2 << endl;
    }else cout << n1 << endl;
    
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    // int count = Count(n);
    // cout << count << endl;
    // int rev = Reverse(n);
    // cout << rev << endl;

    ArmstrongNo(n);
    return 0;
}


// completed finally took 3 hours to understand 
