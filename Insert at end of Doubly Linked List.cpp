
Node * insertAtTail(Node *head, int k) {
    // Write your code here
    if (head==NULL) 
    {
        Node* newNode= new Node(k);
        return newNode;
    }
    Node* newNode= new Node(k);
    Node* temp= head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }

    newNode->prev=  temp;
    temp->next= newNode;

    return head;

}