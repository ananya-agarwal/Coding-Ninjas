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

int findNodeRec(Node *head, int n)
{
    if(head == NULL)
        return -1;
    if(head->data == n)
        return 0;
    
    int t = findNodeRec(head->next,n);
    
    if(t != -1)
        return (1+t);
    else
        return -1;
}
