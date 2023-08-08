#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Node* root=NULL;
void insertAtbegin(int data)
{
    struct Node* newnode= new Node;
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
}

void insertAtend(int data)
{
    if(root==NULL)
    {
        insertAtbegin(data);
        return;
    }
    struct Node* newnode=new Node;
    newnode->data=data;
    struct Node* temp=root;
    while(temp->next!=root)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=root;
}
void printlist()
{
    struct Node* temp=root;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=root);
    cout<<"NULL"<<endl;
}
int main()
{
    insertAtend(10);
    insertAtend(17);
    insertAtend(11); 
    insertAtend(15);
    printlist();
}