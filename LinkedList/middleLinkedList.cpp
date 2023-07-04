/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
   
   if(head->next==NULL||head==NULL) // for len0,1 
    return head;
//    if len 2
   if(head->next->next==NULL)
    return head->next;
   Node *slow=head;
   Node *fast=head->next;
   while(fast!=NULL &&fast->next!=NULL)
   {
     fast=fast->next->next;
     slow=slow->next;
   }
   if(fast!=NULL)
   {
       slow=slow->next;
   }
return slow;
}

