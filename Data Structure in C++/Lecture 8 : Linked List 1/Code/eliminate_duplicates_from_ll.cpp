    /****************************************************************

        Following is the class structure of the Node class:

            class Node
            {
            public:
                int data;
                Node *next;
                Node(int data)
                {
                    this->data = data;
                    this->next = NULL;
                }
            };

    *****************************************************************/

    Node *removeDuplicates(Node *head)
    {
        if(head == NULL)
            return head;
        Node *temp = head->next, *pre = head;
        while(temp != NULL)
        {
            if(pre->data == temp->data)
            {
                pre->next=temp->next;
                temp=temp->next;
            }

            else
            {
                pre=pre->next;
                temp = temp->next;
            }
        }

        return head;
    }
