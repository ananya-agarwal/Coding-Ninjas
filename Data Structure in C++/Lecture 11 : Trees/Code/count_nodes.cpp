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

int getLargeNodeCount(TreeNode<int>* root, int x)
{
    int count=0;
    
	if(root->data > x)
        count++;
    
    int ans=0;
    for(int i=0;i<root->children.size();i++)
    	ans = getLargeNodeCount(root->children[i], x);
    
    return count+ans;
}
