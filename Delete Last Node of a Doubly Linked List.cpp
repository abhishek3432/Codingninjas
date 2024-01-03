Node * deleteLastNode(Node *head) {
    // Write your code here
    if(head->next ==NULL)
    {
        head=NULL;
        return head;
    }
    Node* temp=head;
    while(temp->next->next != NULL)
    {
       
        temp= temp->next;
    }
    temp->next->prev= NULL;
    temp->next = NULL;
    
    return head;
}                                                                                                 