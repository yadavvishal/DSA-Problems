#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

};
struct Node* root=NULL;
void insert(int data)
{
    struct Node* newnode= new Node;
    newnode->data=data;
    if(root==NULL)
    {
        newnode->next=newnode;
        root=newnode;
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
void printlist()
{
    struct Node*temp=root;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=root);
    cout<<"NULL"<<endl;
}
int main()
{
    insert(19);
    insert(20);
    insert(28);
    printlist();

}