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
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->next=root;
    newnode->prev=NULL;
    root=newnode;


}
void deletion(int data)
{
    struct Node* temp=root;
    if(temp->data==data)
    {
        root=root->next;
        root->prev=NULL;
    }
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
    insert(10);
    insert(4);
    insert(8);
    insert(9);
    printlist();
    deletion(9);
    printlist();

}