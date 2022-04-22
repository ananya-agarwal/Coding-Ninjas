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
#include<queue>
void printLevelWise(BinaryTreeNode<int> *root) 
{
    if(root == NULL)
        return;
    
	queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    
    while(pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> * front = pendingNodes.front();
        pendingNodes.pop();

        if(front == NULL)
        {
            if(pendingNodes.size() == 0)
                break;
            
            cout<<endl;
            pendingNodes.push(NULL);
        }
        else
        {
            cout<<front->data<<" ";
            if(front->left)
                pendingNodes.push(front->left);
            if(front->right)
                pendingNodes.push(front->right);
        }
    }
}
