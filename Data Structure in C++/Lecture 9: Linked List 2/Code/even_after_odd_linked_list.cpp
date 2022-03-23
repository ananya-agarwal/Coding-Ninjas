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
Node *evenAfterOdd(Node *head)
{
    if(head == NULL)
        return head;
    
	Node *evenT = NULL, *evenH= NULL, *oddH = NULL, *oddT = NULL;
    while(head != NULL)
    {
        if(head->data % 2 == 0)
        {
            if(evenH == NULL)
            {
                evenH = head;
                evenT = head;
            }
            else
            {
                evenT->next = head;
                evenT = evenT->next;
            }
            head = head->next;
        }
        else
        {
            if(oddH == NULL)
            {
                oddH = head;
                oddT = head;
            }
            else
            {
                oddT->next = head;
                oddT = oddT->next;
            }
            head = head->next;
        }
    }
    
    if(oddH == NULL)
        return evenH;
    else
        oddT->next = evenH;
    if (evenH!= NULL)
        evenT->next = NULL;
    
    return oddH;
}
