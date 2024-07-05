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
// converting
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
int LengthofLL(Node* head){
    int count = 0;
    Node* temp =head;
    while(temp){
        // cout<<temp->data<<"->";
        temp = temp->next;
        count++;
    }
    return count;
}
// check if present
bool Search(Node* head, int key){
    Node* temp = head;
    while (temp)
    {
        if(temp->data==key) return true;
        temp=temp->next;
    }
    return false;    
}

Node* removehead(Node* head){
    if(head==nullptr) return head;
    Node* temp = head;
    head=head->next;
    delete(temp);
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    vector<int> arr ={ 2,5,8,7,55};
    Node *head = Convertarr2ll(arr);
    head =removehead(head);
    print(head);
    
    

}