#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
struct Node* root=NULL;
void deleteionAtbegin()
{
    struct Node*temp=root;
    struct Node*current=root;
    while(current->next!=root)
    {
        current=current->next;
    }
    current->next=root->next;
    root=root->next;
    free(temp);
    return;
}
void insertAtbegin(int data)
{
    struct Node* newnode=new Node;
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
    insertAtbegin(10);
    insertAtbegin(19);
   insertAtbegin(50);
    insertAtbegin(39);
    printlist();
    deleteionAtbegin();
    printlist();
}