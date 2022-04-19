/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x)
{
    if(root == NULL)
        return NULL;
    
	TreeNode <int> *max = NULL;
    if(root->data > x)
        max = root;
    
    TreeNode<int> *childMax = NULL;
    for(int i=0;i<root->children.size();i++)
    {
        childMax = getNextLargerElement(root->children[i],x);
        
        if(childMax == NULL)
            continue;
        else
        {
            if(max == NULL)
                max = childMax;
        	else if((childMax->data > x) && (childMax->data < max->data))
            	max = childMax;
        }
    }
    return max;
}
