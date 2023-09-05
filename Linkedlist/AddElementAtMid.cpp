#include <bits/stdc++.h>
using namespace std;
// Add an element in middle of the linked list

struct Node
{
    int data;
    Node *next;
};
struct Node *root = NULL;

void insert(int data)
{
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->next = root;
    root = newnode;
}
void InsertAtMiddle(int data)
{
    struct Node *temp = root;
    int count = 0;
    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->next = NULL;

    while (temp != NULL)
    {
        count++;

        temp = temp->next;
    }
    cout << count;
    struct Node *curr = root;

    // means linkedlist even  number me hai to element ko n/2 place pe add karnege
    int n;
    if (count % 2 == 0)
    {
        n = count / 2;
    }
// nhi to agar number me honge to (n+1)/2 place pe karenge aad

    else
    {
        n = (count + 1) / 2;
    }
    int count2 = 0;
    while (n-- >1)
    {
        curr = curr->next;
    }
    newnode->next = curr->next;
    curr->next = newnode;
}


void printList()
{
    struct Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    insert(19);
    insert(83);
    insert(73);
    insert(81);
    insert(80);
    insert(75);

    printList();
    cout << endl;

    InsertAtMiddle(5);

    printList();
}