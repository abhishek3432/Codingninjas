vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    vector<pair<int,int>> sum;
    Node* left=head;
    Node* right=findTail(head);
    while(left->data<right->data)
    {
        if(left->data+right->data==k)
        {
            sum.push_back({left->data, right->data});
            left=left->next;
            right=right->prev;
        }
        else if(left->data+right->data<k)
                left=left->next;
             else
                right=right->prev;

    }
    return sum;
}