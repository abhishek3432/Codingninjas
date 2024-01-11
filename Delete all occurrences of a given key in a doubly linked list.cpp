Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    Node* temp=head;

        while(temp!=NULL)
        {
            if(temp->data==k)
            {
                if(temp==head)//if first element has duplicate
            
                    head=temp->next;
                
                Node* nextNode=temp->next;
                
                Node* prevNode=temp->prev;
                
                if(nextNode!=NULL) nextNode->prev=prevNode;
            
                if(prevNode!=NULL) prevNode->next=nextNode;
                
                temp=nextNode;
            
            }
            else
            {
            
                temp=temp->next;
            
            }
        
        }
        
        return head;
}