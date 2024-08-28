#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
};


// converting the array to linked list
Node* convertll2arr(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int  i = 1; i < arr.size() ; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp ;
        mover = mover;
    }
    return head;
    
}

Node* print
int main() {
    vector<int> arr = {1,2,3,4,5};
    Node* head = convertll2arr(arr);
    
    return 0;
}