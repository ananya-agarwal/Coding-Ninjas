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
int length(Node *head)
{
    int c=0;
    if(head == NULL)
        return 0;
    if(head->next == NULL)
        return 1;
    c = 1+length(head->next);
    return c;
}

Node *appendLastNToFirst(Node *head, int n)
{
    Node *temp = head;
    int l = length(head);
    int j = l-n;
    int i=0;
    if(head == NULL)
        return head;
    if(n == 0)
        return head;
    while(i<j-1)
    {
        head = head->next;
        i++;
    }
    Node * t = head;
    head = head->next;
    t->next = NULL;
    
    Node *temp2 = head;
    while(temp2->next != NULL)
    	temp2 = temp2->next;
    
    temp2->next = temp;
    return head;
}








/*

int length(node *head) {
    
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
node* append_LinkedList(node* head,int n)
{
    //write your code here
    node *p=head;
    node *q=head;
    for(int i=1;i<length(head)-n;i++)
    {
        p=p->next;
    }
    for(int i=1;i<length(head);i++)
    {
        q=q->next;
    }
    q->next=head;  //circular LL
    head=p->next;
    
    p->next=NULL; //breaking that circular LL
    
    return head;
    
}
*/
