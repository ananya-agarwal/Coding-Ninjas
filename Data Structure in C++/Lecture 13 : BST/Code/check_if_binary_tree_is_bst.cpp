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
//conceot of min max use krna pada bcs just apne parent se nahi check krna
//chck upper vale baaki sab se bhi krna ha

#include<climits>

bool isBST(BinaryTreeNode<int> *root, int min = INT_MIN, int max = INT_MAX)
{
    if (root == NULL)
        return true;

    if (root->data < min || root->data > max)
        return false;

    return isBST(root->left, min, root->data - 1) &&
           isBST(root->right, root->data, max);
}
