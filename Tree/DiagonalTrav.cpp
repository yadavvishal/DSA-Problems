#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
struct Node *root = NULL;
struct Node *insert(int data)
{
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
void preorder(struct Node*root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

vector<int> diagonalTrav(struct Node *root)
{
    queue<Node* >q;
   vector<int>ans;
   if(!root)
   {
       return ans;
   }
   // queue me push karenge root ko
   
   q.push(root);
   // jab tak queue empty nhi hoga tab tak traverse karenge
   
   while(!q.empty())
   {
       
       Node *temp=q.front();
       q.pop();
       // jab tak tree ka right side empty na ho tab tak ye chalega
       
       while(temp)
       {
           // agar temp ka left hai to usko push kar denge queue me
           
           if(temp->left)
           {
               q.push(temp->left);
           }
           // vector me store karte jaaynege temp ke data ko
           
           ans.push_back(temp->data);
           // temp ko tree ke right me shift karete jayegnge
           
           temp=temp->right;
       }
   }
   return ans;
}


int main()
{
    root = insert(34);
    root->left = insert(32);
    root->right = insert(31);
    root->left->left = insert(20);
    root->left->right = insert(71);
    root->right->left = insert(83);
    root->right->right = insert(36);
    vector<int>result=diagonalTrav(root);
    cout<<"Diagonal Traversal"<<endl;
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl<<"Preorder traversal"<<endl;
    preorder(root);
}