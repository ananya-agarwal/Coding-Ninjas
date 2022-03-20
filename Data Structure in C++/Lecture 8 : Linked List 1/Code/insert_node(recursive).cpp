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
Node* insertNode(Node *head, int i, int data) 
{
    if(head == NULL || i<0)
        return head;
    if(i == 0)
    {
        Node * newNode = new Node(data);
    	newNode->next = head;
        head = newNode;
        return newNode;
    }
    Node *n = insertNode(head->next,i-1,data);
    head->next = n;
}
