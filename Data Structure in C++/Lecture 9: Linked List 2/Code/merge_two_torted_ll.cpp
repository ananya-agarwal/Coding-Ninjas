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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    Node *fh  = NULL, *ft = NULL;
	
    if(head1 == NULL && head2 ==NULL)
        return NULL;
    
    if(head1 == NULL)
        return head2;
    else if(head2 == NULL)
        return head1;
    
    if(head1->data <= head2->data)
    {
        fh = head1;
        ft = head1;
        head1 = head1->next;
    }
    else
    {
        fh = head2;
        ft = head2;
        head2 = head2->next;
    }
            
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data >= head2->data)
        {
            ft->next = head2;
            ft = head2;
            head2 = head2->next;
        }
        else
        {
            ft->next = head1;
            ft = head1;
            head1 = head1->next;
        }
    }  
    
    if(head1 == NULL)
        ft->next = head2;
    
    else if(head2 == NULL)
        ft->next = head1;
    
    return fh;
}
