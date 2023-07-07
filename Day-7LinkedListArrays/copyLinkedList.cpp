#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    if(!head)return head;
    LinkedListNode<int>*iter=head;
    LinkedListNode<int>*front=NULL;
    // step-1
    while(iter!=NULL)
    {
        front=iter->next;
        LinkedListNode<int> *copyNode=new LinkedListNode<int>(iter->data);
        copyNode->random=NULL;
        iter->next=copyNode;
        copyNode->next=front;
        iter=front;
    }
    iter=head;
    while(iter!=NULL)
    {
        if(iter->random!=NULL)
        {
            iter->next->random=iter->random;
        }
            iter=iter->next->next;
    }
    // step3
    iter=head;
    LinkedListNode<int> *dummy =new LinkedListNode<int>(0);
    LinkedListNode<int> *copy=dummy;
    dummy->next=head->next;

    while(iter!=NULL)
    {
        front=iter->next->next;
        copy->next=iter->next;
        copy=copy->next;
        iter->next=front;
        iter=front;
    }
    return dummy->next;
}
