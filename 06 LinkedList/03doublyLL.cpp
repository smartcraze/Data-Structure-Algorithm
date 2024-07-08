#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data2)
    {
        data = data2;
        next = nullptr;
        back = nullptr;
    }
};
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "Null" << endl;
}

Node *convertArr2Dll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp =
            new Node(arr[i],
                     nullptr, prev);

        prev->next = temp;

        prev = temp;
    }
    return head;
}

Node *deleteHead(Node *head)
{
    if (head == NULL ||
        head->next == NULL)
    {
        return NULL;
    }
    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
};

Node *deleteTail(Node *head)
{
    if (head == NULL ||
        head->next == NULL)
        return NULL;
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node *Removekthnode(Node *head, int k)
{
    // head is null or single element then delete
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *knode = head;
    int cnt = 0;
    // going to that node k
    while (knode != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        knode = knode->next;
    }
    // what if the knode next is null means last node
    if (knode->next == NULL)
        return deleteTail(head);
    // if knode is head
    if (knode == head)
        return deleteHead(head);
    // if knode standing in middle then

    Node *prev = knode->back;
    Node *front = knode->next;
    prev->next = front;
    front->back = prev;
    knode->back = nullptr;
    knode->next = nullptr;
    delete knode;
    return head;
}
void deleteNode(Node *temp)
{
    Node *prev = temp->back;
    Node *front = temp->next;
    if (front == NULL)
    {
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    free(temp);
}
// insetion begins here
Node *InserBeforeHead(Node *head, int value)
{
    if (head == NULL)
    {
        return new Node(value);
    }
    if (head->next != NULL)
    {
        Node *newhead = new Node(value, head, nullptr);
        head->back = newhead;
        return newhead;
    }
    // return head;
}
Node *InsertBeforeTail(Node *head, int value)
{
    Node* temp = head;
    if (head == NULL)
    {
        return new Node(value);
    }
    while (temp->next!=NULL)
    {
        
    }
    
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 0};
    Node *head = convertArr2Dll(arr);
    // deleteNode(head->next);
    head = InserBeforeHead(head, 0);
    head = InsertBeforeTail(head, 29);

    print(head);

    return 0;
}

// all comments

// insertion ->
// head(before)
// tail
// kth
// node
// head(after)
// head = Removekthnode(head,5);