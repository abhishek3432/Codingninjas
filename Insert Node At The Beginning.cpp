/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* temp=list;
    Node* newNode=new Node(newValue);
    newNode->next= temp;
    list=newNode;//this is unnecessary can also work just remove temp and work on list return newnode
    return list;

}