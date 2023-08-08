#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node* right;
};
struct Node*insert(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void postorderdisplay(struct Node* temp)
{   
   
    if(temp!=NULL)

    {
        postorderdisplay(temp->left);
        postorderdisplay(temp->right);
        cout<<temp->data<<" ";
    }
}
int main()
{
    struct Node*root=insert(1);
    root->left=insert(3);
    root->right=insert(4);
    root->left->left=insert(6);
    root->left->right=insert(9);
    root->right->left=insert(8);
    root->right->right=insert(20);
    postorderdisplay(root);
}