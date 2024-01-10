Node * removeDuplicates(Node *head)
{
    // Write your code here
    Node* prevNode= head;
    Node * nxtNode=prevNode->next;
    //consider && must here
    while(prevNode!=NULL && nxtNode!=NULL)
    {
        nxtNode=prevNode->next;
        //must consider this condition
        while(nxtNode!=NULL && nxtNode->data == prevNode->data)
        {
            Node* duplicate = nxtNode;
            nxtNode=nxtNode->next;
            delete(duplicate);
        }
        prevNode->next=nxtNode;
        //must consider this condition
        if(nxtNode!=NULL)nxtNode->prev=prevNode;
        prevNode=nxtNode;
     }
     return head;
    
}