#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node*prev;
};
// insert from End of List

struct Node *root=NULL;
void insert(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;

    struct Node*temp;
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
// revserse list ...
void reverselist()
{
    struct Node*temp=NULL;
    struct Node*curr=root;
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if(temp!=NULL)
    {
        root=temp->prev;
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
    // insertion At end of list

    insert(20);
    insert(83);
    insert(88);
    insert(72);
    insert(66);
    insert(62);
    insert(61);
    printlist();
    reverselist();
    printlist();
    return 0;
}