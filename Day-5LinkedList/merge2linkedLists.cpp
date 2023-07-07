#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL&&second==NULL)
        return NULL;
    if(first==NULL&&second!=NULL)
        return second;
    if(second==NULL&& first!=NULL)
        return first;
    Node<int>* temp;
    Node<int>*first_node;
    if(first->data<second->data)
    {
            first_node=first;
            first=first->next;
    }
else{
            first_node=second;
            second=second->next;
    }
    temp=first_node;
    while(first!=NULL&& second!=NULL)
    {
        if(first->data<second->data)
        {
            temp->next=first;
            first=first->next;
        }
        else{
            temp->next=second;
            second=second->next;
        }
        temp=temp->next;
    }
    if(second!=NULL)
    temp->next=second;
    if(first!=NULL)
    temp->next=first;
    return first_node;
}
