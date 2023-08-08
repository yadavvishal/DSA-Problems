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
void deletion(Node** root, int x)
{
    Node* temp;
    
    if((*root)->data==x)
    {
        temp=*root;
        *root=(*root)->next;
        free(temp);
    }
    else{
        Node* current=*root;
        while(current->next!=NULL)
        {

            if(current->next->data==x)
            {
                temp=current->next;
                current->next=current->next->next;
                free(temp);
                break;
            }
            current=current->next;
        }
    }
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
    deletion(&root, 5);
    printLinkedList(root);

    
    return 0;
    
}