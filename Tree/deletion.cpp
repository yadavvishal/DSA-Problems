#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node* right;
};
struct  Node*insert(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void deletion(struct Node*temp){
    if(root==NULL)
    {
        cout<<"Tree is empyt:";
    }
    if(root->left==NULL && root->right==NULL)
    {
        
    }
}
void display(struct Node* temp )
{
    if(temp!=NULL)
    {
        cout<<temp->data<<" ";
        display(temp->left);
        display(temp->right);
    }
}

int main()
{
    struct Node* root=insert(3);
    root->left=insert(2);
    root->right=insert(8);
    root->left->left=insert(4);
    root->left->right=insert(23);
    display(root);
    deletion(root);
}