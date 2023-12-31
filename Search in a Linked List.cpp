int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    // cout<<"k "<<k<<endl;

    Node<int>* temp=head;
    while(temp)
    {
        // cout<<"data"<<temp->data<<endl;
        
        if(temp->data==k)   return 1;
        temp=temp->next;
    }
    return 0;
}