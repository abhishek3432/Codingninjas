Node *findMiddle(Node *head) {
    // Write your code here
    int mid;
    int count=0;
    Node* temp= head;
    while(temp)
    {
        count++;
        temp=temp->next;
    }
     
     mid= (count/2)+1;
     temp=head;
     while(mid>1)
    {
        
        temp=temp->next;
        mid--;
    }

    return temp;

}
