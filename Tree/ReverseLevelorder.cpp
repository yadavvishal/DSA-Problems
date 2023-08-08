#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
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
void reverselevelorder(struct Node*root)
{
    stack<Node*>s;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        struct Node *temp=q.front();
        q.pop();
        s.push(temp);
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
    }
    while(!s.empty())
    {
        root=s.top();
        cout<<root->data<<" ";
        s.pop();
    }
}
int main()
{
    root=insert(83);
    root->left=insert(93);
    root->right=insert(73);
    root->left->left=insert(46);
    root->left->right=insert(72);
    root->right->left=insert(65);
    root->right->right=insert(92);
    reverselevelorder(root);
    return 0;
}