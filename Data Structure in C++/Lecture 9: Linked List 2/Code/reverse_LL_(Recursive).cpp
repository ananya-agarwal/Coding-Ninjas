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
/* Method 1
Node *reverseLinkedListRec(Node *head)
{
  if(head==NULL || head ->next ==NULL)
      return head;
    
    Node* smallans=reverseLinkedListRec(head->next);
    Node*tail= head->next;
    tail->next=head;
    head ->next =NULL;
    
    return smallans;
}
*/

/*

method 2

Node *reverseLinkedListRec(Node *head)
{
	if(head == NULL || head->next == NULL)
    	return head;
    
    Node * smallans = reverseLinkedListRec(head->next);
    Node*temp = smallans;
    
    while(temp->next != NULL)
        temp = temp->next;
    
    temp->next = head;
    head->next = NULL; 
    return smallans;
}

*/


//method 3
class Pair
{
    public:
    Node *head;
    Node *tail;
};

Pair reverse_ll(Node * head)
{
    if(head == NULL || head->next == NULL)
    {
        Pair obj;
        obj.head = head;
        obj.tail = head;
        return obj;
    }
    
    Pair smallans = reverse_ll(head->next);
    smallans.tail->next = head;
    head->next = NULL;
    
    Pair obj;
    obj.head=smallans.head;
    obj.tail=head;
    return obj;
}


Node *reverseLinkedListRec(Node *head)
{
    return reverse_ll(head).head;
}
