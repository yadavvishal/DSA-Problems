#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};

struct Node*newNode(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

struct Node*insert(struct Node* root,int data)
{
    if(root==NULL)
    {
        return newNode(data);
    }
    if(data<(root->data))
    {
        root->left=insert(root->left,data);
    }
    if(data>(root->data))
    {
        root->right=insert(root->right,data);
    }
    return root;
}
void inorder(struct Node* root,int data)
{
    if(root!=NULL)
    {
        inorder(root->left,data);
        if(root->data==data)
        {
            cout<<"Data is present"<<endl;
        }
        cout<<root->data<<" ";
        inorder(root->right,data);
    }
}
int main()
{
    struct Node*root=NULL;
    root=insert(root,30);
    insert(root,33);
    insert(root,39);
    insert(root,24);
    insert(root,81);
    inorder(root,39);

}