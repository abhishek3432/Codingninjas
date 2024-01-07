bool detectCycle(Node *head)
{
	//	Write your code here
    //for no node or single node
    if(head==NULL || head->next==NULL)
        return false;
        Node* fast= head;
        Node* slow= head;

        while(fast->next!=NULL && fast->next->next!=NULL )
        {
            fast= fast->next->next;
            slow= slow->next;
            if(fast==slow)  return true;
        }
    

    return false;
}