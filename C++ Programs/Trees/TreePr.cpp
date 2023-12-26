#include<iostream>
using namespace std;
struct node
{
public:
    int data;
    node *left,*right;

    node(int num)
    {
        data = num;
        left = right = nullptr;
    }

};
class BST
{
    private:
        node* root;
        node* insertH(node* temp, int num)
        {
            if(temp == nullptr)
            {
                return new node(num);
            }

            if(num < temp->data)
            {
                temp->left = insertH(temp->left, num);
            }
            else if(num >= temp->data)
            {
                temp->right = insertH(temp->right, num); 
            }
            return temp;
        }

        void inOrder(node *temp)
        {
            if(temp != nullptr)
            {
                inOrder(temp->left);
                printf("%d ",temp->data);
                inOrder(temp->right);
            }
        }
    public : 
        BST()
        {
            root = nullptr;
        }
        void insert(int num)
        {
            root = insertH(root,num);
        }
        void inorder()
        {
            inOrder(root);
        }
};
int main()
{
    BST ob;
    ob.insert(30);
    ob.insert(24);
    ob.insert(23);
    ob.inorder();
    return 0;
}