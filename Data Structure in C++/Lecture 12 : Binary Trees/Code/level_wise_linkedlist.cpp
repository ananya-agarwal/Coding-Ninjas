/**********************************************************

	Following are the Binary Tree Node class structure and
	the Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

	template <typename T>
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};

***********************************************************/
vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
    vector<Node<int>*> v;
    if(root == NULL)
    {
        v.push_back(NULL);
        return v;
    }
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    Node <int>*head = NULL;
    Node <int>*tail = NULL;
   
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    while(pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> * front = pendingNodes.front();
        pendingNodes.pop();
        
        if(front == NULL)
        {
            tail->next = NULL;
            if(pendingNodes.size() == 0)
                break;
            pendingNodes.push(NULL);
            
            tail = NULL;
            head = NULL;
        }
        else
        {
            Node<int> *newNode = new Node<int>(front->data);
            if(head == NULL) 
            {
                head = newNode;
                tail = newNode;
                v.push_back(head);
            }
            else
            {
                tail -> next = newNode;
                tail = tail -> next;
            }
            
            if(front->left)
                pendingNodes.push(front->left);
            if(front->right)
                pendingNodes.push(front->right);
        }
    }
    return v;
}
