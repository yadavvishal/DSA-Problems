#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    int hd;
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
void preorder(struct Node* temp)
{
    if(temp!=NULL)
    {
        cout<<temp->data<<" ";
        preorder(temp->left);
        preorder(temp->right);
    }
}
void bottomview(struct Node*root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<Node*>q;
    map<int,int>mp;
    int hd=0;
    root->hd=hd;
    q.push(root);
    while(!q.empty())
    {
        // yha pe hashmap use karenge key or value ko store karne ke liye

        
        struct Node*curr=q.front();
        q.pop();
        hd=curr->hd;
        mp[hd]=curr->data;
        if(curr->left!=NULL)
        {
            curr->left->hd=hd-1;
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            curr->right->hd=hd+1;
            q.push(curr->right);
        }
    }
    for(auto i=mp.begin();i!=mp.end();i++)
    {
          cout << i->second << " ";
    }

}
int main()
{
    root=insert(23);
    root->left=insert(21);
    root->right=insert(34);
    root->left->left=insert(93);
    root->left->right=insert(38);
    root->right->left=insert(83);
    root->right->right=insert(92);
   
    preorder(root);
    cout<<endl;
     cout<<"The bottom view of binary tree are: "<<endl;
    bottomview(root);
    return 0;
}