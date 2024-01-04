Node* reverseDLL(Node* head)
{   
    // Write your code here 
    if(head==NULL || head->next==NULL)  return head;
    Node* curr= head;
    Node* pre= NULL;

    while(curr!=NULL)
    {   //swap  node pointers
        pre=curr->prev;
        curr->prev= curr->next;
        curr->next= pre; 
        
        //move to next node
        curr= curr->prev;  
    }
    head=pre->prev;
    return head;
}