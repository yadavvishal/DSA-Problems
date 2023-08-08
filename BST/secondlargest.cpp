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
struct Node* insert(struct Node*root,int data)
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
void inorder(struct Node*root,vector<int>&v)
{
    if(root!=NULL)
    {
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);

    }
}
int main()
{
    struct Node*root=NULL;
    root=insert(root,9);
    insert(root,3);
    insert(root,30);
    insert(root,83);
    insert(root,74);
    insert(root,82);
    insert(root,17);
    vector<int>v;
    inorder(root,v);
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-2)
        {
            cout<<v[i]<<endl;
        }
    }
    return 0;
}