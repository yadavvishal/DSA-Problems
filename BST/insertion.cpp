#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node* right;
};


struct Node*newNode(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}
struct Node* insert(struct Node* root,int data)
{
    if(root==NULL)
    {
        return newNode(data);
    }
    if(data<(root->data))
    {
        root->left=insert(root->left,data);
    }
    else if(data>(root->data))
    {
        root->right=insert(root->right,data);
    
    }
    return root;
}

void inorderdisplay(struct Node* root)
{
    if(root!=NULL)
    {
        inorderdisplay(root->left);
        cout<<root->data<<" ";
        inorderdisplay(root->right);
    }
}
int main()
{
    struct Node* root=NULL;
    root=insert(root,10);
    insert(root,40);
    insert(root,50);
    insert(root,20);
    insert(root,10);
    insert(root,80);
    inorderdisplay(root);
    return 0;

}
