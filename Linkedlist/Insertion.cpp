#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Node*root=NULL;
void insert(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->next=root;
    root=newnode;
    
}
void printList()
{
    struct Node*temp;
    temp=root;
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
   insert(93);
   insert(83);
   insert(92);
   insert(27);
    
    printList();
    return 0;
}