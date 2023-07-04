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
        return first;
    if(second==NULL&& first!=NULL)
        return second;
    Node<int>* temp;
    Node<int>*first_node;
    if(first->data<second->data)
    {
            first_node=first;
    }
else{
            first_node=second;
    }
    while(first!=NULL&& second!=NULL)
    {
        if(first->data<second->data)
        {
            temp=first;
            first=first->next;
            temp=first;
        }
        else{
            temp=second;
            second=second->next;
            cout<<"hi"<<temp->data<<endl;
        }
        temp=temp->next;
    }
    while(second!=NULL)
    {
        temp=second;
        second=second->next; 
        temp=temp->next;
    }
    while(first!=NULL)
    {
        temp=first;
        first=first->next; 
        temp=temp->next;
    }    
    return first_node;
}
