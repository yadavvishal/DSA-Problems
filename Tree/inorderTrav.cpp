#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node* right;
};
struct Node* insert(int data)
{
    struct Node* newnode= new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

}
void  inorderdisplay(struct Node* temp)
{
    if(temp!=NULL)
    {
        inorderdisplay(temp->left);
        cout<<temp->data<<" ";
        inorderdisplay(temp->right);
    }
    
}
int main()
{
    struct Node* root=insert(20);
    root->left=insert(29);
    root->right=insert(38);
    root->left->left=insert(21);
    root->left->right=insert(93);
    inorderdisplay(root);
    return 0;

}