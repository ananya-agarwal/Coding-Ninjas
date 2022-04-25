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
class BST
{
    BinaryTreeNode<int> *root;

    BinaryTreeNode<int> *deleteData(int data, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            return NULL;
        }

        if (data > node->data)
        {
            node->right = deleteData(data, node->right);
            //it is possible ki delete cal krne root ka ekdum right vala hi delete hogaya ho
            //so right subtree pr call krke, we r returning the root of the right subtree which is attached
            //to the actual root
            return node;
        }
        else if (data < node->data)
        {
            node->left = deleteData(data, node->left);
            return node;
        }
        else
        {
            if (node->left == NULL && node->right == NULL)
            {
                delete node;
                return NULL;
            }
            else if (node->left == NULL)
            {
                BinaryTreeNode<int> *temp = node->right;
                node->right = NULL;
                delete node;
                return temp;
                //agar sirf delete node; return root->right; krte toh 
                //root apne sath poore right subtree ko hi recursion se delete
                //thus right subtree ka root store kra and actual root ke right se use hatadiya 
                //ab root delete kara and new root which is right subtree ka root use as a new root 
                //return krdiya
            }
            else if (node->right == NULL)
            {
                BinaryTreeNode<int> *temp = node->left;
                node->left = NULL;
                delete node;
                return temp;
            }
            else
            {
                BinaryTreeNode<int> *minNode = node->right;
                while (minNode->left != NULL)
                {
                    minNode = minNode->left;
                }
                int rightMin = minNode->data;
                node->data = rightMin;
                node->right = deleteData(rightMin, node->right);
                //node ke right  se ab delete krdo use jise new root banaya ha
                return node; //actual root is still t
            }
        }
    }

    void printTree(BinaryTreeNode<int> *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << ":";
        if (root->left != NULL)
        {
            cout << "L:" << root->left->data << ",";
        }

        if (root->right != NULL)
        {
            cout << "R:" << root->right->data;
        }
        cout << endl;
        printTree(root->left);
        printTree(root->right);
    }

    BinaryTreeNode<int> *insert(int data, BinaryTreeNode<int> *node)
    {
        //we r returning might be the c
        if (node == NULL)
        {
            BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
            return newNode;
        }

        // Here equal element will go in left subtree...
        if (data <= node->data)
        {
            node->left = insert(data, node->left); //say 10 left me NULL tha, ab wanna replece NULL and 7
            //so we need to make it clear ki node->left that is 10 ke left me 7 daal do
        }
        else
        {
            node->right = insert(data, node->right);
        }

        return node;
        //agar left/right me daala fir bhi overall root remains the same 
    }

    bool hasData(int data, BinaryTreeNode<int> *node)
    {
        if (node == NULL)
        {
            return false;
        }

        if (node->data == data)
        {
            return true;
        }
        else if (data < node->data)
        {
            return hasData(data, node->left);
        }
        else
        {
            return hasData(data, node->right);
        }
    }
    
    public:
    BST()
    {
        root = NULL;
    }

    ~BST()
    {
        delete root;
    }

    void remove(int data)
    {
        root = deleteData(data, root);
    }

    void print()
    {
        printTree(root);
    }

    void insert(int data)
    {
        root = insert(data, root);
    }

    bool search(int data)
    {
        return hasData(data, root); 
        //parameters are diff so dono ko hi search keh skte the
    }

};
