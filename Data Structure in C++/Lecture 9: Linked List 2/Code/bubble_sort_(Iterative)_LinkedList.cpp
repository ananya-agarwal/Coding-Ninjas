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
int len(Node *head)
{
    int c=0;
    if(head == NULL)
        return 0;
    if(head->next == NULL)
        return 1;
    c = 1+len(head->next);
    return c;
}

Node* bubbleSort(Node* head)
{
    if(head==NULL || head->next==NULL)
        return head;

    for(int i=0;i<len(head);i++)
    {
        Node *curr=head;
        Node *prev=NULL;
        
        while(curr->next!=NULL) // traverse through LL
        {
            if(curr->data > curr->next->data)  // if nodes are to be swapped
            {
				if(prev)   //check if previous of the current node exist , u cant point on a garbage value
                {
                    // swapping using those 4 steps
                    Node* t=curr->next->next;
                    curr->next->next= curr;
                    prev->next=curr->next;
                    curr->next=t;
                    prev=prev->next;
                    
                }
                else  //is it doent exist it would be head node 
                {
                    head= curr->next;
                    curr->next=head->next;
                    head->next=curr;
                    prev=head;
                }
                
            }
            else    // else you simply move to next node
            {
                prev=curr;
                curr=curr->next;
            }
        }
    }
    return head;
}
