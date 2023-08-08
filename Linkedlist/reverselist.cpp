#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

};

struct Node* root=NULL;
void insert(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->next=root;
    root=newnode;
    
    
}
void reverselist()
{
    struct Node*current=root;
    struct Node* next=NULL;
    struct Node* prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    root=prev;
}
void printlist()
{
    struct Node*temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    insert(10);
    insert(29);
    insert(25);
    insert(20);
    insert(2);
    printlist();
    reverselist();
    printlist();
}