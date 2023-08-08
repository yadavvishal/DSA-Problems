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
};
void levelviseTrav(struct Node*root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        while(n>0)
        {
            struct Node*curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
            n--;
        }
        cout<<endl;
    }
}
int main()
{
    root=insert(30);
    root->left=insert(3);
    root->right=insert(32);
    root->left->left=insert(93);
    root->left->right=insert(38);
    root->right->left=insert(34);
    root->right->right=insert(72);
    levelviseTrav(root);
    return 0;
}