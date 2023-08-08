#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
struct Node*root=NULL;

struct Node* insert(int data)
{
    struct Node* newnode=new Node;
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
void leftview(struct Node*temp)
{
    // level order traversal are

    
    queue<Node*>q;
    q.push(temp);
    
    while(!q.empty())
    {
        int n=q.size();
        for(int i=1;i<=n;i++)
        {
            struct Node*curr=q.front();
            q.pop();
            if(i==1)
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
    
    root=insert(40);
    root->left=insert(34);
    root->right=insert(22);
    root->left->left=insert(29);
    root->left->right=insert(10);
    inorder(root);
    cout<<endl;
    cout<<"The left view of binary tree"<<endl;
    leftview(root);
    return 0;

}