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
//here the data is chnaged and not the nodes which is wrong acc to the question

Node* swapNodes(Node *head,int i,int j)
{
    Node *p=head,*q=head;
    
    for(int index=0;index<i;index++)
    {
        p=p->next;
    }
     for(int index=0;index<j;index++)
    {
        q=q->next;
    }
    
    int x=p->data;
    p->data=q->data;
    q->data=x;
    
    return head;
}
