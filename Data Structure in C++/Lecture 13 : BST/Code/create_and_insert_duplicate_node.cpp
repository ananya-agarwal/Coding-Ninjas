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
void insertDuplicateNode(BinaryTreeNode<int> *root)
{
    if(root == NULL)
        return;
    
    BinaryTreeNode<int> * newNode = new BinaryTreeNode<int>(root->data);
    newNode->left = root->left;
    root->left = newNode;
  
    insertDuplicateNode(newNode->left);
    insertDuplicateNode(root->right);
}
