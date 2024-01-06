Node* reverseLinkedList(Node *head)
{
    // Write your code here
    //ITERATIVE APPROACH
    //for no node or single node
    if(head ==NULL || head->next==NULL)// pre==null always true so never go after || except first time
            return head;
            
    Node* pre=NULL;
    Node* cur=head;
    
    while(cur!=NULL)
    {
        Node* frnt= cur->next;//frnt=frnt->next; create error
        cur->next=pre;//change pointer to previous node
        //move to next node
        pre=cur;
        cur=frnt;
        
    }
    return pre;//don't return cur bcz it is null at last

}