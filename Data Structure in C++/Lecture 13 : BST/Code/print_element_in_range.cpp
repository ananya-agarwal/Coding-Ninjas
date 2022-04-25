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
bool searchInBST(BinaryTreeNode<int> *root , int k) 
{
    if(root == NULL)
        return false; 
        
	if(root->data == k)
        return true;
    else 
    {
        if(k> root->data)
    		searchInBST(root->right, k);
    	else
        	searchInBST(root->left, k);
    }
}

void elementsInRangeK1K2(BinaryTreeNode<int>* root, int k1, int k2)
{
	for(int i=k1;i<=k2;i++)
    {
        bool ans = searchInBST(root, i);
        if(ans)
            cout<<i<<" ";
    }
}
