#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;

};

struct Node* root=NULL;
void printlist()
{
    struct Node*temp=root;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=root);
    cout<<"NULL"<<endl;
}
void countNodes()
{
    int count=0;
    struct Node*temp=root;
    do{
        
        temp=temp->next;
        count++;
    }
    while(temp!=root);
    cout<<count<<endl;
}
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
    struct Node*temp=root;
    while(temp->next!=root)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=root;
    root=newnode;
}
int main()
{
    insertAtbegin(10);
    insertAtbegin(24);
    insertAtbegin(34);
    insertAtbegin(28);
    printlist();
    countNodes();
}
