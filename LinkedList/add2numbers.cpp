/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node *res=num1;
    int carry=0;
    if(num1==NULL)
    {
        return num2;
    }
    if(num2==NULL)
    {
        return num1;
    }
    while(num1!=NULL && num2!=NULL)
    {
        num1->data=num1->data+num2->data+carry;
        carry=num1->data/10;
        num1->data=num1->data%10;
        if(num1->next==NULL && num2->next==NULL)
        {
           if(carry!=0)
            {
                Node *extra=new Node(carry);
                num1->next=extra;
                num1=num1->next;
            }
        }
        if(num1->next==NULL && num2->next!=NULL)
        {
            num2=num2->next;
            num1->next=num2;
            num1=num1->next;
            break;
        }
        num1=num1->next;
        num2=num2->next;
        
    }
    
    while(num1!=NULL)
    {
        num1->data=num1->data+carry;
        carry=num1->data/10;
        num1->data=num1->data%10;
        if(num1->next==NULL)
        {
            if(carry!=0)
            {
                Node *extra=new Node(carry);
                num1->next=extra;
                break;
            }
        }
        num1=num1->next;
    }
    return res;
}
