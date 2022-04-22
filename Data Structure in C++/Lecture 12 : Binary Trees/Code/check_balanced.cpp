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
int height(BinaryTreeNode<int> * root)
{
    if(root == NULL)
        return 0;
    
    return (1+max(height(root->left), height(root->right)));
}

bool isBalanced(BinaryTreeNode<int> *root)
{
    if(root == NULL)
        return true;
    
	int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if( (abs(leftHeight - rightHeight) <= 1) && (isBalanced(root->right)) && (isBalanced(root->left)))
		return true;
    
    return false;
}
