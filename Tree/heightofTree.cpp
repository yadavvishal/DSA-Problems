#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node* right;
};
struct Node* insert(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
int height(struct Node *temp)
{
    if(temp==NULL)
    {
        return 0;
    }
    else{
        int lh=height(temp->left);
        int rh=height(temp->right);

        if(lh>rh)
        {
            return (lh+1);
        }
        else{
            return (rh+1);
        }
    }
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
    struct Node* root=insert(10);
    root->left=insert(20);
    root->right=insert(30);
    root->left->left=insert(43);
    root->left->right=insert(34);
    preorderdisplay(root);
   
    int ans=height(root);
    cout<<" Height of binary tree "<<ans;
    return 0;

}