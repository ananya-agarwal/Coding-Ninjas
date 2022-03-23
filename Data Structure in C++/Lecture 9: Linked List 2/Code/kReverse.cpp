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

Node *kReverse(Node *head, int k)
{
    if(head == NULL)
        return head;
    
    Node * h1 = head, *t1 = head, *h2 = NULL;
    int c=1;
    while(c < k && t1->next != NULL)
    {
        c++;
        t1=t1->next;
    }
    h2 = t1->next;
    t1->next = NULL;
    
    Pair obj_new = reverse_ll(h1);
    Node *h3 = kReverse(h2,k);
    obj_new.tail->next = h3;
    return obj_new.head;
}
