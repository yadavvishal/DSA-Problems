#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
};

struct Node*insert(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void display(struct Node* temp)
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
    
    struct Node* root=insert(10);
   // cout<<root->data<<" ";
    root->left=insert(19);
    //cout<<root->left->data<<" ";
    root->right=insert(28);
    // cout<<root->right->data;
    display(root);
   // root->right=insert(27);
    //preorderdisplay(root);
}