/***********************************************************
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
BinaryTreeNode <int>* helper(int *postOrder, int *inOrder, int pS, int pE, int inS, int inE)
{
    if(pS > pE)
        return NULL;
    
    int rootData = postOrder[pE];
    int rootIndex = -1;
    for(int i=inS;i<=inE;i++)
    {
        if(inOrder[i] == rootData)
        {
            rootIndex = i;
            break;
        }
    }
    
    int inLS = inS;
    int inLE = rootIndex-1;
    int inRS = rootIndex+1;
    int inRE = inE;
    
    int pLS = pS;
    int pLE = inLE - inLS + pLS;
    int pRS = pLE+1;
    int pRE = pE-1;
    

    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = helper(postOrder, inOrder, pLS, pLE, inLS, inLE);
    root->right = helper(postOrder, inOrder, pRS, pRE, inRS, inRE);
    return root;
    
}
BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength)
{
    return helper(postorder,inorder,0,postLength-1,0,inLength-1);
}
