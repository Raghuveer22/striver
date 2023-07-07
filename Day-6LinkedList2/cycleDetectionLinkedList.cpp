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

bool detectCycle(Node *head)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->next==NULL)
    {
        return false;
    }

	Node *slow=head;
    Node *fast=head->next;
    while(slow!=fast)
    {
        slow=slow->next;
        if(fast==NULL||fast->next==NULL)
        {
            return false;
        }
        fast=fast->next->next;
        
    }
    return true;
}