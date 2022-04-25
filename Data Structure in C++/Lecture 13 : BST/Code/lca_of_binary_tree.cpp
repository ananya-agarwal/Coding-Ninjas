/**********************************************************
	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
int getLCA(BinaryTreeNode <int>* root , int a, int b)
{
    if(root == NULL)
        return -1;
    
    if(a == root->data || b == root->data)
        return root->data;
    
    int n1 = -1;
    int n2 = -1;
    n1 = getLCA(root->left,a,b);
    n2 = getLCA(root->right,a,b);
    
    if(n1 != -1 && n2 == -1)
        return n1;
    
    else if(n1 == -1 && n2 != -1)
        return n2;
    
    else if(n1 == -1 && n2 == -1)
        return -1;
    
    else if(n1 != -1 && n2 != -1)
        return root->data;
}
