# Singly linked list 
- we can increse aswell as descrese the size of the data structure
- they are similar to array 
- they are not stored in contigeous location
- we can store anything 
- size can be increase anytime 


#### how it works
- head of the LL is called head --> m1
next --> m2
next --> m3
.
.
next --> null    it is called the tail of the ll
- if we know the one location we can get the next of that ;
- we have a head pointer which points to the first node
##### useed in 
- stack
- queue
- circular queue
- in real life we use int he browser next and the previous arrow button 
- ` so what happen here is that the browser remembr the previous and the next `
- ` so when we click on the next button it will go to the next and when we click
on the previous button it will go to the previous `
- ` so the browser is using the singly linked list to do this `

#### Knowing the pointer
```
int x =2
int *p = &x;
print  p  --> 2; 
```
##### what we store in the linked list

- self defined data types 

```python
class Node:
    int data;
    Node* next;
    Node(data 1,next1){
        data = data1
        next = next1;
    }
```


## Making the class node
```c++
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    // construtor
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    // one more construtor with next as nullptr
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
int main(){
    vector<int> arr ={ 2,5,8,7};
    Node *head = new Node(arr[0]);
    cout << head->data;
}
```

###### memory space 
- if 32 bit system 
- 4 bytes for int
- 4 bytes for pointer
-if 64 bit 
- 4 bytes for int
- 8 bits for the pointer

## cob=verting the array to linked list 
```python
Node* Convertarr2ll(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node* mover =head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
```
```c++
// printing the array
   Node * temp =head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
```