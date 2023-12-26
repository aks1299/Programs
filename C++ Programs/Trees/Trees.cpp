#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
node* create(int num)
{
    node *p = new node();
    p->data = num;
    p->left = p->right = NULL;
    return p;
}
//insert node in a tree
node* insert(int a[],node* root,int i,int n)
{
    if(i<n)
    {
        node *temp = create(a[i]);
        root = temp;
        //insert left child
        root->left = insert(a,root->left,(2*i)+1,n);
        //insert right child
        root->right = insert(a,root->right,(2*i)+2,n);
    }
    return root;
}
void inorder(node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void preorder(node *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main()
{
    int a[] = {11, 44, 10, 17, 20, 9, 34, 7};
    int n = sizeof(a) / sizeof(a[0]);
    node *root = insert(a,root,0,n);
    cout<<"in-order : "<<" ";
    inorder(root);
    cout<<endl;
    cout<<"pre-order : "<<" ";
    preorder(root);
    cout<<endl;
    cout<<"post-order : "<<" ";
    postorder(root);
    cout<<endl;
}