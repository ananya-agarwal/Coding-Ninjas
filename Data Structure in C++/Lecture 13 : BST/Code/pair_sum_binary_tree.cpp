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
#include<bits/stdc++.h> 
int k=0;

int count(BinaryTreeNode<int> * root)
{
    if(root == NULL)
        return 0;
    
    return 1 + count(root->left) + count(root->right);
}

void convert(int *arr, BinaryTreeNode <int> * root)
{
    if(root == NULL)
        return;
    
    arr[k++] = root->data;
    convert(arr, root->left);
    convert(arr, root->right);
}

void pairSum(BinaryTreeNode<int> *root, int sum)
{
    if(root == NULL)
        return;

    int c = count(root);
    int *arr = new int[c];
    convert(arr, root);
        
    sort(arr, arr+c);
    int i=0,j=c-1;
    
    while(i<j)
    {
        if(arr[i] + arr[j] < sum)
            i++;
        else if(arr[i] + arr[j] > sum)
            j--;
        else 
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }    
    }
}
