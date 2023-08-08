#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
    
};
struct Node*root=NULL;
void insertAtbegin(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;
   if(root==NULL)
   {
    newnode->next=newnode;
    root=newnode;
   }
   struct Node *temp=root;
   while(temp->next!=root)
   {
    temp=temp->next;
   }
   temp->next=newnode;
   newnode->next=root;
   root=newnode;

}
void checkCircularlist()
{
    struct Node*slow=root;
    struct Node*fast=root->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        if(slow==fast)
        {
            cout<<"List is Circular";
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"Not circular";
}
void printlist()
{
    struct Node*temp=root;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=root);
    cout<<"NULL"<<endl;
}

int main()
{
    insertAtbegin(39);
    insertAtbegin(59);
    insertAtbegin(79);
    insertAtbegin(19);
    insertAtbegin(99);
    insertAtbegin(29);
    insertAtbegin(49);
    printlist();
    checkCircularlist();
    return 0;
}
