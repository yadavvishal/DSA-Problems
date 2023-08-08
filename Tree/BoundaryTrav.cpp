#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
struct Node*root=NULL;
struct Node*insert(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void printleavesNode(struct Node*root)
{
    if(root==NULL)
    {
        return ;
    }
    
    printleavesNode(root->left);
    if(!root->left && !root->right)
    {
        cout<<root->data<<" ";
    }
    printleavesNode(root->right);
}
void printleftview(struct Node*root)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->left!=NULL)
    {
        cout<<root->data<< " ";
        printleftview(root->left);
    }
    else if(root->right!=NULL)
    {
        cout<<root->data<<" ";
        printleftview(root->right);
    }
}
void printrightview(struct Node*root)
{
    if(root==NULL)
    {
        return ;
    }
    if(root->right!=NULL)
    {
        printrightview(root->right);
        cout<<root->data<<" ";

    }
    else if(root->left!=NULL)
    {
        printrightview(root->left);
        cout<<root->data<< " ";
    }

}
void boundaryTrav(struct Node*root)
{
   if(root==NULL)
   {
    return;
   }
   cout<<root->data<<" ";
   printleftview(root->left);

   printleavesNode(root->left);
   printleavesNode(root->right);

   printrightview(root->right);
}
int main()
{
    root=insert(83);
    root->left=insert(3);
    root->right=insert(7);
    root->left->left=insert(94);
    root->left->right=insert(56);
    root->right->left=insert(73);
    root->right->right=insert(32);
    boundaryTrav(root);

}