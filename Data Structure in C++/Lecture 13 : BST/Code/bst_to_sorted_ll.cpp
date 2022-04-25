/**********************************************************

	Following are the Binary Tree Node class structure and the 
	Node class structure

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
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

***********************************************************/
class Pair
{
    public:
    Node <int>*head;
    Node <int>*tail;
};

Pair headTail(BinaryTreeNode<int> *root)
{
 	if(root == NULL)
    {
        Pair p;
        p.head = NULL;
        p.tail = NULL;
        return p;
    }
    
    Node<int> * newRoot = new Node<int>(root->data);
    Pair leftAns = headTail(root->left);
    Pair rightAns = headTail(root->right);
    
    Pair p;
    
    Node <int>* lhead = leftAns.head;
    Node <int>* rhead = rightAns.head;
    Node <int>* ltail = leftAns.tail;
    Node <int>* rtail = rightAns.tail;
    
    if(lhead == NULL && rhead == NULL)
    {
        p.head = newRoot;
        p.tail = newRoot;
    }
    
    else if(lhead == NULL && rhead)
    {
        p.head = newRoot;
        p.tail = rtail;
        newRoot->next = rhead;
    }

    else if(lhead && rhead == NULL)
    {
        p.head = lhead;
        p.tail = newRoot;
        ltail->next = newRoot;
    }

    else
    {
        p.head = lhead;
        p.tail = rtail;
        ltail->next = newRoot;
        newRoot->next = rhead;
    }
    
    return p;
}

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) 
{
    return(headTail(root).head);
}
