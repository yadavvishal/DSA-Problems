#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node*prev;
};
struct Node*root=NULL;
void insert(int data)
{
    struct Node*newnode=new Node;
    struct Node*temp;
    newnode->data=data;
    if(root==NULL)
    {
        newnode->next=NULL;
        newnode->prev=NULL;
        root=newnode;
    }
    else{
        temp=root;
        while(temp->next!=NULL)
        {
            temp=temp->next;

        }   
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL; 
    }
    

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
    insert(20);
    insert(71);
    insert(88);
    insert(87);
    insert(90);
    printlist();
    return 0;
}