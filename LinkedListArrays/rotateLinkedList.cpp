/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
    Node*temp=head;
    int cnt=1;
    while(temp->next!=NULL)
    {
         temp=temp->next;
         cnt++;
    }
   
    temp->next=head;
    int rem=cnt-(k%cnt+1);

    temp=head;
    while(rem)
    {
         temp=temp->next;
         rem--;
    }
    Node *res=temp->next;
    temp->next=NULL;
    return res;
}