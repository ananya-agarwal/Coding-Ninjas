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
#include<string>
void helper(BinaryTreeNode<int> *root, int leftoutSum, string get)
{
    if(root == NULL)
        return;
    
    string str = to_string(root->data);
    get.append(str);
    get.append(" ");
    
    leftoutSum = leftoutSum - root->data;
        
    if(leftoutSum == 0 && !root->left && !root->right)
    	cout<<get<<endl;
    
    helper(root->left, leftoutSum, get);
    helper(root->right, leftoutSum, get);

}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k) 
{
    
	helper(root, k, "");
}
