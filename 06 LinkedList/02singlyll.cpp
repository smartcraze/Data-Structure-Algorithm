#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void print(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << endl;
}
Node *Convertarr2ll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *removehead(Node *head)
{
    if (head == nullptr)
        return head;
    Node *temp = head;
    head = head->next;
    delete (temp);
    return head;
}

// deleting the tail of the linked list
Node *removetail(Node *head)
{
    if (head->next == nullptr || head == nullptr)
        return nullptr;
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete (temp->next);
    temp->next = nullptr;
    return head;
}
Node *deletek(Node *head, int k)
{
    if (head == nullptr)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = nullptr;

    while (temp != nullptr)
    {
        cnt++;
        if (cnt == k)
        {
            // previous ka next jo ki woh element k hoga wooh prev ka next ka next point karega basically hum prev se k ko chhod kar usken next se connect karna
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
    // tc =o(n);
}
Node *deleteelement(Node *head, int el)
{
    if (head == nullptr)
        return head;
    if (head->data == el)
    {
        Node *temp = head;
        head = head->next;
        delete (temp);
        return head;
    }
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp->data == el)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
    // tc =o(n);
}

// insertion a new head
Node *insertathead(Node *head, int el)
{
    Node *temp = new Node(el);
    temp->next = head;
    head = temp;
}
// second way using second constructor;
Node *insertathead2(Node *head, int el)
{
    return new Node(el, head);
}

Node *InsertAtTail(Node *head, int value)
{
    if (head == nullptr)
    {
        return new Node(value);
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new Node(value);
    return head;
};



int main()
{
    vector<int> arr = {9, 6, 3, 2, 7};
    Node *head = Convertarr2ll(arr);
    // NOTE : deleteion
    //  head = removehead(head);
    //  head = removetail(head);
    //  head = deletek(head,4);
    //  head = deleteelement(head,6);
    //  NOTE: insertion
    //  32:42
    // head = insertathead2(head, 990);
    head = InsertAtTail(head, 75);
    print(head);

    
    return 0;
}