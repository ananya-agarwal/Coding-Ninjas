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
void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{
    if(root==NULL)
        return;
    
    if(root->left && !root->right)
    {  
        cout<<root->left->data<<" ";
        printNodesWithoutSibling(root->left); 
    }
    
    else if(!root->left && root->right)
    {  
       cout<<root->right->data<<" ";
       printNodesWithoutSibling(root->right); 
    }
    
	else if(root->left && root->right)
    {
        printNodesWithoutSibling(root->left); 
        printNodesWithoutSibling(root->right); 
    }
    else
        return;   
}
