#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;

};
struct Node* root=NULL;
void insert(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->next=root;
    newnode->prev=NULL;
    root=newnode;
}
void deletelastnode()
{
    struct Node* prev=root;
    struct Node* temp=root->next;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        prev=prev->next;

    }
    prev->next=NULL;
    free(temp);
    

}

void printlist()
{
    struct Node* temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    insert(3);
    insert(8);
    insert(2);
    insert(6);
    insert(43);
    printlist();
    deletelastnode();
    printlist();
}