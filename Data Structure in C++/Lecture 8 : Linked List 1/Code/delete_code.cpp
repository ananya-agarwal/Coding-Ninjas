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

Node *deleteNode(Node *head, int pos)
{
    if(head == NULL)
        return head;
    
	int count = 0;
    int count1 = 0;
    Node *t = head;
    
    while(t->next != NULL)
    {
        t=t->next;
		count1++;
    }
    if(pos > count1)
        return head;
    
    if(pos == 0)
    {
        Node *c = head;
        head = head->next;
        delete c;
        return head;
    }
    Node *temp = head;
 	
    while(temp != NULL && count<pos-1)
    {
        temp = temp->next;
        count++;
    }

    if(temp != NULL)
    {
        Node * a = temp->next;
        Node * b = a->next;
        delete a;
        temp->next = b;
    }
    return head;
}
