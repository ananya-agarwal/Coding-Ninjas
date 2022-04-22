/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) 
{
	if(root == NULL)
        return false;
    if(root->data == x)
        return true;
    
    bool ans1,ans2;
    ans1 = isNodePresent(root->left, x);
    ans2 = isNodePresent(root->right, x);
    
    if(ans1 || ans2)
        return true;
    
    return false;
}
