#include <bits/stdc++.h>
using namespace std;
// lowercase hae ishliye 
int main()
{
    string s;
    cin >> s;
    // pre compute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    // querry
    int q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}

int main(){
    string s;
    cin >> s;
    // pre compute
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    // querry
    int q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c] << endl;
    }

    return 0;
}





















// coooment
/*
immagin elelmt has the lowecase charcter 26 alphabet

arr[26] mapping
a-0 --> a-a
b-1--> b-a
c-2--> c-a
d-3
e-4
f-5   simillary
# ASSCII VALUE COMES IN PICTURE   256 charcter

A=65
a=97
`int x = 'a' `
this means the x has been type casted to the ascci value


a=97
f=102
f-a =5

102-97 = 5 which is the index of the f
so the fomula is
char -'a'
- if we have the upper case then hame subtract nahi karna padta aur sabka apna apna value hota
 */