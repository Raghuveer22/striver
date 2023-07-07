/****************************************************************

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

*****************************************************************/
#include<bits/stdc++.h>
using namespace std;
int solve(Node *head)
{
    int len=0;
    Node * temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    int len1=solve(firstHead);
    int len2=solve(secondHead);
    if(len1<len2)
    {
        swap(len1,len2);
        swap(firstHead,secondHead);
    }
    int diff=len1-len2;
    // using the difference
    while(diff>0)
    {
        firstHead=firstHead->next;
        diff--;
    }
   while(firstHead!=NULL && secondHead!=NULL)
   {
       if(firstHead==secondHead)return firstHead;
       firstHead=firstHead->next;
       secondHead=secondHead->next;
   }
   return NULL;
}

