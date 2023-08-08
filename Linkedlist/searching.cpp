#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Node* newNode(int data)
{
    Node* node= new Node;
    node->data=data;
    node->next=NULL;
    return node;
}
void insertnewNode(Node** root,int data)
{
    Node* node=newNode(data);
    Node*ptr;
    if(*root==NULL)
    {   
        *root=node;
    }
    else{
        ptr=*root;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=node;
    }

}
void printLinkedList(Node* root) {

   while (root != NULL) {
      cout << root->data << " -> ";
      root = root->next;
   }
   cout << "NULL" << endl;


}
bool search(Node* head, int x)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}
Node *createLinkedlist(int arr[],int n)
{
    Node *root=NULL;
    for(int i=0;i<n;i++)
    {
        insertnewNode(&root,arr[i]);
        
    }
    return root;
    
}   
int main()
{
    int n=5;
    int arr[]={1,2,4,5,3,};
    
    Node *root=createLinkedlist(arr,n);
    printLinkedList(root);
    search(root, 21)? cout<<"Data found" : cout<<"Data not found";
    return 0;
    
}