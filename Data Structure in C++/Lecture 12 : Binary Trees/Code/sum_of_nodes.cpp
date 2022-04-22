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
int getSum(BinaryTreeNode<int>* root) 
{
    if(root == NULL)
    	return 0;
    
    int sum=0;
    int leftSum = getSum(root->left);
    int rightSum = getSum(root->right);
    sum = sum + leftSum + rightSum + root->data;
    return sum;
}
