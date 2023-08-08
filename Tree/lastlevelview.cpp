#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node*next;
};
struct Node *root = NULL;
struct Node *insert(int data)
{
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void predorder(struct Node*temp)
{
    if(temp!=NULL)
    {
        if(temp->left==NULL && temp->right==NULL)
        {
            cout<<temp->data<<" ";
        }
        predorder(temp->left);
        predorder(temp->right);
    }
}

int main()
{
    root = insert(1);
    root->left = insert(2);
    root->right = insert(7);
    root->left->left = insert(66);
    root->left->right = insert(8);
    root->right->left = insert(77);
    root->right->right = insert(6);
    root->left->left->left = insert(22);
    root->left->left->right = insert(32);
    root->right->right->right = insert(88);

    cout<<" The last level of tree are: ";
    predorder(root);
}