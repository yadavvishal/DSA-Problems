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
void levelorder(struct Node*temp)
{
    if(temp==NULL)
    {
        return ;
    }
    queue<Node*>q;
    q.push(temp);
    struct Node*curr;
    while(!q.empty())
    {
        curr=q.front();
        q.pop();
        if(curr->left)
        {
            q.push(curr->left);
        }
        if(curr->right)
        {
            q.push(curr->right);
        }
        cout<<curr->data<<" ";

    }
}

int main()
{
    root=insert(20);
    root->left=insert(30);
    root->right=insert(50);
    root->left->left=insert(32);
    root->left->right=insert(45);
    root->right->left=insert(76);
    root->right->right=insert(83);
    levelorder(root);
    return 0;
}