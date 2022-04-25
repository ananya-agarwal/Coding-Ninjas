/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};
	
***********************************************************/
#include<climits>
#include<math.h>

class quad
{
    public:
	int minimum;
    int maximum;
    bool bst;
    int checkheight;

};


quad BST(BinaryTreeNode<int> *root)
{
    if(root==NULL)
    {
       quad obj;
        obj.minimum =INT_MAX;
        obj.maximum = INT_MIN;
        obj.bst = true;
        obj.checkheight=0;
    return obj;
    }
    
    quad left= BST(root->left);
    quad right =BST(root->right);
    
    int minimum=min(root->data,min(left.minimum,right.minimum));
    int maximum=max(root->data,max(left.maximum,right.maximum));
    bool  isBSTfinal=(root->data >left.maximum) && (root->data < right.minimum) && left.bst && right.bst;
   
    quad obj;
    obj.minimum=minimum;
    obj.maximum=maximum;
    obj.bst=isBSTfinal;
    
    if(isBSTfinal)
        obj.checkheight= 1+max(left.checkheight,right.checkheight);
    else   
        obj.checkheight= max(left.checkheight,right.checkheight);
    return obj;
    
}

int largestBSTSubtree(BinaryTreeNode<int> *root) 
{
    return BST(root).checkheight;
}










