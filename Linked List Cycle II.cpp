Node *firstNode(Node *head)
{
    //    Write your code here.
        Node* slow=head;
        Node* fast=head;
        Node* entry=head;
        if(head==NULL || head->next==NULL)
            return NULL;

        while(fast->next!=NULL && fast->next->next!=NULL)
        {  
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                while(entry!=slow)
                {   
                    entry=entry->next;
                    slow=slow->next;
                }
                return slow;
            }

        }
        return NULL;
        

}