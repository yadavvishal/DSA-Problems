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
void inorder(struct Node*temp)
{
    if(temp!=NULL)
    {
        inorder(temp->left);
        cout<<temp->data<<" ";
        inorder(temp->right);
    }
}
void rightview(struct Node*temp)
{
    // using level order traversal 

    
    queue<Node*>q;
    q.push(temp);
    while(!q.empty())
    {

        int n=q.size();
        for(int i=1;i<=n;i++)
        {
            struct Node*curr=q.front();
            q.pop();
            if(i==n)
            {
                cout<<curr->data<<" ";
            }
            if(curr->left!=NULL)
            {
                q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                q.push(curr->right);
            }
        }
    }
}
int main()
{
    root=insert(20);
    root->left=insert(39);
    root->right=insert(34);
    root->left->left=insert(51);
    root->left->right=insert(81);
    root->right->left=insert(91);
    root->right->right=insert(99);
    inorder(root);
    cout<<" The right view of tree is "<<endl;
    rightview(root);
    return 0;
}