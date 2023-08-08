#include <bits/stdc++.h>
using namespace std;
// To find the ceil Value of target means next greater value of target
// Time Complexity O(log n);
struct Node
{
    int data;
    Node *left;
    Node *right;
};
struct Node *newNode(int data)
{

    struct Node *newnode = new Node;
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct Node *insert(struct Node *root, int key)
{
    if (root == NULL)
    {
        return newNode(key);
    }
    if ((root->data) > key)
    {
        root->left = insert(root->left, key);
    }
    else if ((root->data) < key)
    {
        root->right = insert(root->right, key);
    }
    return root;
}
void findCeilValue(struct Node *root, int &minn, int target)
{
    if (root != NULL)
    {
        findCeilValue(root->left, minn, target);
        if ((root->data) > target)
        {
            minn = min(minn, root->data);
        }
        findCeilValue(root->right, minn, target);
    }
}
void inorderdisplay(struct Node *root)
{
    if (root != NULL)
    {
        inorderdisplay(root->left);

        cout << root->data << " ";

        inorderdisplay(root->right);
    }
}
int main()
{
    struct Node *root = NULL;
    root = insert(root, 39);
    insert(root, 82);
    insert(root, 22);
    insert(root, 61);
    insert(root, 90);
    inorderdisplay(root);
    cout << endl;
    int target = 55;

    int minn = INT_MAX;
    findCeilValue(root, minn, target);
    cout<<minn;
    return 0;
}