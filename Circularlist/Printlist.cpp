#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Node* root=NULL;
void insertAtbegin(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;
    if(root==NULL)
    {
        newnode->next=newnode;
        root=newnode;
        return;
    }
    struct Node* temp=root;
    while(temp->next!=root)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=root;
    root=newnode;
    return;
}
void printlist()
{
    
    struct Node* temp=root;
    
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=root);
    cout<<"NULL"<<endl;
}
int main()
{
    insertAtbegin(19);
    insertAtbegin(13);
    insertAtbegin(15);
    insertAtbegin(11);
    insertAtbegin(10);
    cout<<"The list elements are:";
    printlist();
}