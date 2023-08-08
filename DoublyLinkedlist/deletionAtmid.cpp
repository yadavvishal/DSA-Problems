#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;

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
void deletionAtmid()
{
    struct Node*ptr1=root;
    struct Node* ptr2=root;
    while(ptr1!=NULL && ptr1->next!=NULL)
    {
        ptr1=ptr1->next->next;
        ptr2=ptr2->next;
    }
    cout<<ptr2->data;

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
    insert(9);
    insert(24);
    insert(4);
    insert(2);
    insert(18);
    deletionAtmid();
    printlist();

}