# Basic Maths

## 1. digit

- extration of the digit
- dividing by % 10 remainder give the no and dividing gives the remaing no removing unit place

```javascript
 let num = 1234;
 let unit = num % 10;
 let tens = Math.floor(num / 10) % 10;
 let hundreds = Math.floor(num / 100) % 10;
 let thousands = Math.floor(num / 1000) % 10;
 this all we can do by loop No need to write each step !!

```

# counting the number

- counting the number of digits in a number
- 1 By running loop
- 2 By using Math.floor(Math.log10(num)) + 1
- 3 By using String

```cpp
#include <bits/stdc++.h>
int count(int n){
    int count = (int)(log10(n)+1);
    return count ;
}
Time complexity = o(log10(n))
```

# Reversing of Number

- reversing of number by using loop
- reversing of number by using recursion
- reversing of number by using string
- reversing of number by using Math

```cpp
#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
   int rev = 0;
   while(n>0){
       rev = rev*10 + n%10;
       n = n/10;
       }
       return rev;
       }
```

# Palindrome

- Palindrome is a number which is same when reversed
- 1.  we compare the number with the reverse no learned before ;
- 2.  we can also use string to check palindrome
- 3.  we can also use recursion to check palindrome

  ```javascript
  [] mistake that can be done
  here donot directly compre the n cause we are directly tempreing the n so you can
  use a variable to store the n and then compare the n with the variable

  ```

# Armstrong Number (very important)

- Armstrong number is a number which is equal to the sum of the cube of its digits
- we know to extract the digit
  int sum =0
  number =2
  sum =number\*\*3
  and same like this if we do it for all the number
  we cant give the flag so that we get to know that it is the amrstoring no or not
  compare the sum with the original number here also keep in mind that we are already tempering the oringinal no so take in different variable and then do check ;
  we get the armstrong

  ```cpp
  void ArmstrongNo(int n) {
  int original = n;
  int sum = 0;
      while (n > 0) {
          int digit = n % 10;
          sum += digit * digit * digit; // Calculate the cube of the digit
          n /= 10;
      }
      if (sum == original) {
          cout << original << " is an Armstrong number." << endl;
      } else {
          cout << original << " is not an Armstrong number." << endl;
      }
  }
  ```

# print all divisor or factor 
 ## Thought process
 - we know that the divisor is the number which divides the number without leaving any remainder
     `n%i==0`
 - all the divior will be in between 1 to n; so we can loop and divide n with each number 
` time complexity is o(n)`

- **Note:** Important information lets optimise this 

```python
36
let say n= 36
1 x 36          1 == n/1        
2 x 18          2 == n/2
3 x 12          3 == n/3
4 x 9           4 == n/4
6 x 6           6 == n/6     make the check that n/6 != 6 means donot take 6 two times 
------------------------------
9 x 4
12 x 3
18 x 2
36 x 1

we can get all the no upto the line 
all factore we got in the form of small x big no;
1,2,3,4,6,36,18,12,9,

sqrt(36) == 6
if we looop till square ig the n


```
```c++
time complexity is o(srt(n))
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
    // nlogn
    sort(ls.begin(),ls.end());
    // big o(factor)
    for(auto it : ls) cout << it << " ";
}

```

# prime No:
- exactly 2 factor 1 & itself
- 1 is not a prime no
- 2 is a prime no
- 3 is a prime no
  

# gcd /hcf

-  greatest common divisor of the number is know 
-  gcd of 2 no is the largest no which is a factor of both the no
- gcd =1 // default 
1 loop till the smallest nu between n1 & n2
time complexity o(minimum(n1,n2));
2 check the each no that divide both no 
3 if it is divide then it is the gcd
gcd==i

```c++
// to optimise if we run the loop from backward it wil have the better complexity not sure might be the worst case would be min of n1,n2
n1=20
n2=40
gcd =1
for(i=min(n1,m2); i>=1; i--){
    if(n1%i==0 && n2%i==0){
        gcd=i;
        break
    }
}

```



# euclidean Algorithm 
- its states that gcd of two no 
- ` gcd(a,b) == gcd((a-b),b) ` where a>b;
make it smaller and smaller till one of them is 0;

```python
// sometime it could not be the better linear complexity for ex do with (52,10)
gcd(a,b) == gcd((a-b),b)
ex = n1=20
n2=15
gcd(20,15) == gcd(5,15) 
make the greater no in front 
gcd(15,5) == gcd(10,5)
gcd(10,5) == gcd(5,5)
gcd(5,5) == gcd(0,5)
the moment when one number become the zero the number no is the gcd 
5 is the gcd 

```

so the best version is keep the module instead subtracting the 52-10 5 times right 
we could 52%10==2

`gcd(a,b)== gcd((a%b),b)`

greater % smaller --> one is 0 the other is the gcd 



```c++
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

```
[smartcraze](https://smartcraze.online) portfolio check it out !!

- [ ] Practice 
- **Note:** Thanks you striver