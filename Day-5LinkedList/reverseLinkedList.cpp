#include <bits/stdc++.h>
using namespace std;
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
   LinkedListNode<int> *newHead= NULL;
   LinkedListNode<int> *next_node;//new head behave as previous node of every one
   while(head!=NULL)
   {
       next_node=head->next;
       head->next=newHead;
       newHead=head;
       head=next_node;
   }
   return newHead;
}
//runs slower than normal
// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//    if(head==NULL||head->next==NULL)
//         return head;
//    LinkedListNode<int>*nnode=reverseLinkedList(head->next);
//    head->next->next=head;
//    head->next=NULL;
//    return nnode;
// }
