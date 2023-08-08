#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node*left;
    Node*right;
};
struct Node* insert(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void preorderdisplay(struct Node* temp)
{
    if(temp!=NULL)
    {
        cout<<temp->data<<" ";
        preorderdisplay(temp->left);
        preorderdisplay(temp->right);

    }
}

int main()
{
    struct Node* root=insert(1);
    root->left=insert(3);
    root->right=insert(2);
    root->left->left=insert(4);
    root->left->right=insert(6);
    preorderdisplay(root);


}