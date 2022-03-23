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

Node *reverseLinkedList(Node *head) 
{
    if(head == NULL || head->next == NULL)
        return head;
    
 	Node *prev = NULL;
    Node *curr = head;
    Node *forward = head->next;
    
    while(curr->next != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = forward;
        forward = forward->next;
    }
    
    curr->next = prev;
    prev= curr;
    return prev; 
}
