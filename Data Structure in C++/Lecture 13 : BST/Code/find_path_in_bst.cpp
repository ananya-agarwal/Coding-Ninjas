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

vector<int>* getPath(BinaryTreeNode<int> *root , int data) 
{
	if(root == NULL)
        return NULL;
    
    if(root->data == data)
    {
        vector<int> *output = new vector<int>();
        output->push_back(root->data);
        return output;
    }
    
    vector<int> *leftAns = getPath(root->left, data);
    if(leftAns != NULL)
    {
        leftAns->push_back(root->data);
        return leftAns;
    }
    
    vector<int> *rightAns = getPath(root->right, data);
    if(rightAns != NULL)
    {
        rightAns->push_back(root->data);
        return rightAns;
    }
    
    else
        return NULL;
}
