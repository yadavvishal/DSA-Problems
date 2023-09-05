#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
};
struct Node* root=NULL;
void insertion(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->next=root;
    root=newnode;

}
void printList()
{
    struct Node*temp=root;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";

}
int main()
{
    insertion(10);
    insertion(30);
    insertion(73);
    insertion(83);
    printList();
}