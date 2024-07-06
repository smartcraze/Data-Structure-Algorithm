
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
    head = InsertAtTail(head, 5