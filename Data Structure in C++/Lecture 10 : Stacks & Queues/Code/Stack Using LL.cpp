/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/
class Stack 
{
	Node *head;
    int size;
    
   public:
    Stack()
    {
       head = NULL;
       size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty()
    {
        // Implement the isEmpty() function
        return size == 0;
    }

    void push(int element) {
        // Implement the push() function
       //no need to specify if head is null alag se
        Node *newNode = new Node(element);
        newNode -> next = head;
        head = newNode;
        size++;
    }

    int pop() {
        // Implement the pop() function
        if(head == NULL)
            return -1;
        else
        {
            int ans = head->data;
            Node * p =head;
            head=head->next;
            delete p;
            size--;
            return ans;
        }
    }

    int top() {
        // Implement the top() function
        if(head != NULL)
        	return head->data;
        else
            return -1;
    }
};
