#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
// To find the floor value of target means just small value of target
// Time Complexity o(logn)

struct Node*newNode(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct Node*insert(struct Node*root,int data)
{
    if(root==NULL)
    {
        return newNode(data);
    }
    if((root->data)>data)
    {
        root->left=insert(root->left,data);
    }
    else if((root->data)<data)
    {
        root->right=insert(root->right,data);
    }
    return root;

}
void checkFloor(struct Node*root,int key,int &ans)
{
    if(root!=NULL)
    {
       
        checkFloor(root->left,key,ans);
        if((root->data)<key)
        {
            ans=max(ans,root->data);
            
        }
        checkFloor(root->right,key,ans);
    }
}

void inorder(struct Node*root)
{   
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main()
{
    int key=55;
    struct Node*root=NULL;
    root=insert(root,10);
    insert(root,23);
    insert(root,82);
    insert(root,93);
    insert(root,83);
    insert(root,26);
    inorder(root);
    cout<<endl;
    int ans=INT_MIN;
     checkFloor(root,key,ans);
     cout<<ans;
    return 0;
}