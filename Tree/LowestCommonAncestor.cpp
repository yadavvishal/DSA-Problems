#include<bits/stdc++.h>
using namespace std;
// To find the lowest Common Ancestor of two number 
// 
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
struct Node* LowestCommonAncestor(struct Node*root,int num1,int num2)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==num1 || root->data==num2)
    {
        return root;
    }
    root->left=LowestCommonAncestor(root->left,num1,num2);
    root->right=LowestCommonAncestor(root->right,num1,num2);
    // agar root ke left koi value nhi mili then return root ke right karenge

    if(root->left==NULL)
    {
        return root->right;
    }
    // agar root ke right me koi value nhi mili then root ke left ko return karenge
    
    if(root->right==NULL)
    {
        return root->left;
    }
    return root;

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
    root=insert(39);
    root->left=insert(73);
    root->right=insert(83);
    root->left->left=insert(88);
    root->left->right=insert(61);
    root->right->left=insert(74);
    root->right->right=insert(71);
    inorder(root);
    cout<<endl<<"The Lowest Common Ancestor are :";
    struct Node*ans=LowestCommonAncestor(root,61,74);
    cout<<ans->data;
    return 0;

} 