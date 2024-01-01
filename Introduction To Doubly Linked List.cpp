Node* constructDLL(vector<int>& arr) {
    // Write your code here
    Node* head= new Node(arr[0]);
    Node* temp= head;
    for(int i=1; i<arr.size(); i++)
    {
        Node* newNode= new Node(arr[i]);
        newNode->prev= temp;
        temp->next= newNode;
        temp=newNode;
    }

    return head;

}