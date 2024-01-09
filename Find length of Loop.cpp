int findLen(Node* slow, Node* fast)
{
    int length=0;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
        length++;
    }while(slow!=fast);
    
    return length;
}

int lengthOfLoop(Node *head) {
    // Write your code here
    //no node or one node
    if(head==NULL && head->next == NULL)
        return 0;
    
    Node* fast=head;
    Node* slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
            return findLen(slow,fast);
    }
    
}