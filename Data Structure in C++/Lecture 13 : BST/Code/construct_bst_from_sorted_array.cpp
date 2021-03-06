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
BinaryTreeNode<int>* helper(int input[],int s ,int e)
{
    if(s>e)
        return NULL;
    
    int mid=(s+e)/2;
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(input[mid]);
    
    root->left = helper(input,s,mid-1);
    root->right = helper(input,mid+1,e);
    return root;
}
BinaryTreeNode<int>* constructTree(int *input, int n) 
{   
    return helper(input,0,n-1);        
}
