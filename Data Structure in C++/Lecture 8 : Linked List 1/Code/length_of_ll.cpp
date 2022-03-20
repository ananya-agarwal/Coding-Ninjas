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

int length(Node *head)
{
    int c=0;
    Node *temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
}
