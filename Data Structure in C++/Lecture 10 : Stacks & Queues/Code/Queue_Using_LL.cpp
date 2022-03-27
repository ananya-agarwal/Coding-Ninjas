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

class Queue {
    Node *head;
    Node *tail;
    int size;
	// Define the data members
   public:
    Queue() {
		// Implement the Constructor
        head = NULL;
        tail = NULL;
        size = 0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        return size == 0;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
	}

    int dequeue() {
        // Implement the dequeue() function
        if(!isEmpty())
        {
            int ans = head->data;
            Node *p = head;
            head = head->next;
            delete p;
            size--;
            return ans;
        }
        else
            return -1;
    }

    int front() {
        // Implement the front() function
        if(isEmpty())
            return -1;
        return head->data;
    }
};
