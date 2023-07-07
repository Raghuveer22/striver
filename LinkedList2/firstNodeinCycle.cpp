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

Node *firstNode(Node *head)
{
  if(head==NULL||head->next==NULL)
  {
      return NULL;
  }
  Node*slow=head;
  Node *fast=head->next;
  while(slow!=fast)
  {
      if(slow==fast)
        break;
      slow=slow->next;
      if(fast==NULL||fast->next==NULL)
      {
          return NULL;
      }
      fast=fast->next->next;
  }
  fast=NULL;
  slow=slow->next;
  fast=head;
  while(slow != fast)
  {
      slow=slow->next;
      fast=fast->next;
  }
  return slow;

}