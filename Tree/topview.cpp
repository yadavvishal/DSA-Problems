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
void topview(struct Node*root)
{
    queue<Node*>q;
    q.push(root);
    int hd=0;
    root->hd=hd;
    map<int,int>mp;
    while(!q.empty())
    {
        hd=root->hd;
        if(mp.count(hd)==0)
        {
            mp[hd]=root->data;
        }
        if(root->left!=NULL)
        {
            root->left->hd=hd-1;
            q.push(root->left);

        }
        if(root->right!=NULL)
        {
            root->right->hd=hd+1;
            q.push(root->right);
        }
        q.pop();
        root=q.front();

    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout << it->second<<" ";
    }
}

int main()
{
    root=insert(49);
    root->left=insert(43);
    root->right=insert(73);
    root->left->left=insert(92);
    root->left->right=insert(83);
    topview(root);


}