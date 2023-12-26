#include <iostream>
#include<string>
using namespace std;
//structure for every tree node in the BST
class Node 
{
public:
    int data;
    Node* left;
    Node* right;
    //Constructor that intializes the value of every node 
    Node(int num) {

        data = num;
        left = nullptr;
        right = nullptr;
    }
};
//BST class that implements funtions of BST
class BST {
private:
    Node* root;
    //Insert nodes into the BST recursively this compares the data provided with that of the temp node and places it accordingly into the BST
    Node* insert(Node* temp, int num) 
    {
        //if node is empty, that is for first node then new node is returned
        if (temp == nullptr) 
        {
            return new Node(num);
        }

        if (num < temp->data) 
        {
            temp->left = insert(temp->left, num);
        } 
        else if (num >= temp->data) 
        {
            temp->right = insert(temp->right, num);
        }
        return temp;
    }
    //Inorder travesral of the tree 
    void inOrderTraversal(Node* node) 
    {
        if (node != nullptr) 
        {
            inOrderTraversal(node->left);
            cout << node->data << " ";
            inOrderTraversal(node->right);
        }
    }
    //Preorder tarversal of the BST
    void preOrderTraversal(Node* node)
    {
        if(node!=nullptr)
        {
            cout<<node->data<<" ";
            preOrderTraversal(node->left);
            preOrderTraversal(node->right);
        }
    }
    //Postorder traversal of the BST
    void postOrderTraversal(Node* node)
    {
        if(node != nullptr)
        {
            postOrderTraversal(node->left);
            postOrderTraversal(node->right);
            cout<<node->data<<" ";
        }
    }
    //Helper function to print the tree in human understandable manner
    void printHelper(Node *currPtr, string indent, bool last)
    {
        if(currPtr != nullptr)
        {
            cout<<indent;
            if(last)
            {
                cout<<"R----";
                indent += "     ";
            }
            else
            {
                cout<<"L----";
                indent += "|     ";
            }
            cout<<currPtr->data<<endl;

            printHelper(currPtr->left, indent, last = false);
            printHelper(currPtr->right, indent, last = true);
        }
    }
    //Helper funtion for searching a node in the BST
    Node* searchHelper(Node* node, int key)
    {
        if(node == nullptr || key == node->data)
        {
            return node;
        }
        if(key < node->data)
        {
            return searchHelper(node->left, key);
        }
        return searchHelper(node->right, key);
    }
    //Helper function for deletion of nodes in the BST
    Node* deleteHelper(Node* node, int key)
    {
        if(node == nullptr)
        {
            return node;
        }
        else if(key < node->data)
        {
            node -> left = deleteHelper(node -> left, key);
        }
        else if(key > node->data)
        {
            node -> right = deleteHelper(node -> right, key);
        }
        else
        {
            //if no child of the node to be deleted
            if(node->left == nullptr && node->right ==nullptr)
            {
                node = nullptr;
            }
            //if only right child
            else if(node->left == nullptr)
            {
                Node *temp = node;
                node = temp ->right;
            }
            //if only left child
            else if(node -> right == nullptr)
            {
                Node *temp = node;
                node = node -> left;
            }
            //if both child present
            else
            {
                Node *temp = minimum(node->right);
                node->data = temp->data;
                node->right = deleteHelper(node->right, temp->data);
            }
        }
        return node;
    }

public:
    //Intialize the tree to null
    BST() {
        root = nullptr;
    }
    //insert the nodes to the BST
    void insert(int num) {
        root = insert(root, num);
    }
    //inorder traversal
    void inOrder() {
        inOrderTraversal(root);
    }
    //preorder traversal
    void preOrder()
    {
        preOrderTraversal(root);
    }
    //postorder traversal
    void postOrder()
    {
        postOrderTraversal(root);
    }
    //search function
    Node* searchTree(int num)
    {
        return searchHelper(this->root, num);
    }
    //find min
    Node* minimum(Node* node)
    {
        while(node->left != nullptr)
        {
            node = node->left;
        }
        return node;
    }
    //find max
    Node* maximum(Node* node)
    {
        while(node!=nullptr)
        {
            node = node->right;
        }
        return node;
    }
    //print like a tree
    void print()
    {
        printHelper(this->root,"",true);
    }
    //delete node
    Node* deleteNode(int num)
    {
        return deleteHelper(this->root, num);
    }
    //find successor of the given node
    void successor(int num)
    {
        Node* ssNode = searchTree(num);
        cout<<"Successors : "<<endl;
        if(ssNode->left == nullptr)
        {
            cout<<"No left successor"<<endl;
        }
        else
        {
            cout<<"Left -> "<<ssNode->left->data<<endl;
        }
        if(ssNode->right == nullptr)
        {
            cout<<"No right successor"<<endl;
        }
        else
        {
            cout<<"Right -> "<<ssNode->right->data<<endl;
        }
    }
};
int main() {
    BST ob;
    int arr[]={50, 30, 70, 23, 35, 11, 25, 31, 42, 80, 73, 85};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len; i++)
    {
        ob.insert(arr[i]);
    }
    cout<<"In-order Traversal: ";
    ob.inOrder();
    cout<<endl<<"Pre-order Traversal: ";
    ob.preOrder();
    cout<<endl<<"Post-order Traversal: ";
    ob.postOrder();
    cout << endl;
    cout<<"Human Readable Format : "<<endl;
    ob.print();
    ob.deleteNode(70);
    ob.insert(72);
    ob.print();
    ob.successor(80);
    return 0;
}
