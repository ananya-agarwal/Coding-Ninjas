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

Node *skipMdeleteN(Node *head, int M, int N)
{
    //edge cases
    if (M == 0) //all delete
        return NULL;
    if (N == 0)
        return head;//no deletion
    
    //base case
    if(head==NULL ||head->next==NULL) 
        return head;
    
    Node*temp=head;
    int c1=0,c2=0;
    while(c1 < M-1 && temp->next !=NULL)
    {   
        c1++;
        temp=temp->next;
    }
    
    Node*t1=temp;
    temp=temp->next;
    if(temp==NULL)
        return head;
    
    while(c2<N-1 && temp->next != NULL)
    {   
        c2++;
        temp=temp->next;
    }
    
    Node*t2=temp->next;
    Node*m=skipMdeleteN(t2,M,N);   
    t1->next=m;
    return head;
}
