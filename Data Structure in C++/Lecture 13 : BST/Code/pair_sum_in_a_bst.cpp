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
#include<algorithm>
int k=0;
int count(BinaryTreeNode<int>*root)
{
    if(root == NULL)
        return 0;
    
    return 1+count(root->left)+count(root->right);
}

void convert(BinaryTreeNode<int> *root, int *arr)
{
    if(root == NULL)
        return;
    
    arr[k++] = root->data;
    
    convert(root->left,arr);
    convert(root->right,arr);
}

void printNodesSumToS(BinaryTreeNode<int> *root, int s) 
{
    if(root == NULL)
        return;
    
    int c=count(root);
    
    int *arr = new int[c];
    convert(root, arr);
    
    sort(arr, arr+c);
    
    int i=0, j=c-1;
    while(i < j)
    {
        if(arr[i] + arr[j] < s)
            i++;
        else if(arr[i] + arr[j] > s)
            j--;
        else
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
    }
}
