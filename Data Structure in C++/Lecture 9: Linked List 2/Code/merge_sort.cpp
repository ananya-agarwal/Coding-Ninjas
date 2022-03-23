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
int length(Node *head4)
{
    int count=0;
    Node *temp = head4;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}


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


Node *mergeSort(Node *head)
{
    if(head == NULL || head->next == NULL)
        return head;
    
	int mid = length(head)/2;

    Node *temp1 = head;
    for(int i=0;i<mid-1;i++)
        temp1 = temp1->next;

    Node *head3 = temp1->next;
    temp1->next = NULL;
    
    head = mergeSort(head);
    head3 = mergeSort(head3);
    return mergeTwoSortedLinkedLists(head,head3);
}
