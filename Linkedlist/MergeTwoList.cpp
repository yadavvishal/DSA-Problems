#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node*root=NULL;
struct Node *root1 = NULL;
struct Node *root2 = NULL;
struct Node *insert(struct Node **root, int data)
{
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->next = *root;
    return newnode;
}
void printlist()
{
    struct Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    root1 = insert(&root1, 29);
    root1 = insert(&root1, 20);
    root1 = insert(&root1, 19);
    root1 = insert(&root1, 15);
    printlist();
    cout<<endl;
    root2 = insert(&root2, 89);
    root2 = insert(&root2, 89);
    root2 = insert(&root2, 89);
    root2 = insert(&root2, 89);
    root2 = insert(&root2, 89);
    printlist();
    
}