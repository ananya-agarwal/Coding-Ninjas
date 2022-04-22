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

/*
	The first value of the pair must be the minimum value in the tree and 
	the second value of the pair must be the maximum value in the tree
*/
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
    if(root == NULL)
    {
        pair<int, int>p;
        p.first = 100000;
        p.second = 2;
        return p;
    }
    
	pair<int, int> leftAns = getMinAndMax(root->left);
    pair<int, int> rightAns = getMinAndMax(root->right);
    
    int lmax = leftAns.second;
    int lmin = leftAns.first;
    int rmax = rightAns.second;
    int rmin = rightAns.first;
    
    int MAX = max(root->data, max(lmax, rmax));
    int MIN = min(root->data, min(lmin, rmin));
    
    pair<int, int> p;
    p.first = MIN;
    p.second = MAX;
    return p;
}
