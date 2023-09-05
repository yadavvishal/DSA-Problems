#include<bits/stdc++.h>
using namespace std;

// Find karenge linked list palindrome hai ya nhi;
// Time Complexity of O(N) and space O(1)

// Ek or tarika hai .. sare elements ko store kar lenge stack me phir stack se match karete jayenge list ko

struct Node{
    int data;
    Node*next;

};

struct Node*root=NULL;
bool Palindromecheck()
{
    string v ="";
        // pahle saare element to string bana ke v me strore kr lo
        struct Node*head=root;
        
        while(head!=NULL)
        {
            v+=(head->data +'0');
            head=head->next;
            
        }
        // string ke half lenght time traverse kro or match kr lo
        
        for(int i=0;i<v.length()/2;i++)
        {
            if(v[i]!=v[v.length()-1-i]){
                return false;
            }
            
        }
        return true;
}
void insert(int data)
{
    struct Node*newnode=new Node;
    newnode->data=data;
    newnode->next=root;
    root=newnode;
}
void printList()
{
    struct Node*temp=root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    printList();
    cout<<endl;


    cout<<"check this list is palindrome :"<<Palindromecheck();
   


}