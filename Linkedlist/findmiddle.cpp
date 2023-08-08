#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
};
struct Node* newNode(int data)
{
    Node* node=new Node;
    node->data=data;
    node->next=NULL;
    return node;
}

void insertnode(Node**root,int data)
{
    Node* node=newNode(data);
    Node* ptr;
    if(*root==NULL)
    {
        *root=node;
    }
    else{
        ptr=*root;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=node;
    }
}
void printlist(Node* root )
{
    while(root->next!=NULL)
    {
        cout<<root->data<<"->";
        root=root->next;
    }
    cout<<"NULL"<<endl;
}
void findmiddle(Node* root)
{
    struct Node* ptr1,*ptr2;
    ptr1= root;
    ptr2=root;
    while(ptr1!=NULL && ptr1->next!=NULL)
    {
        ptr1=ptr1->next->next;
        
        ptr2=ptr2->next;

    }
    cout<<ptr2->data;
}
Node* createLinkedlist(int arr[],int n)
{
    Node* root=NULL;

    for(int i=0;i<n;i++)
    {
        insertnode(&root,arr[i]);
    } 
    return root;  
}
int main()
{
    int arr[]={1,5,2,6,8};
    int n=5;
    Node*root= createLinkedlist(arr,n);
    printlist(root);
    findmiddle(root);
}