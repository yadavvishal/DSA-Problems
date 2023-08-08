#include<bits/stdc++.h>
using namespace std;

// ya pr root means top hai


struct Node{
    int data;
    Node* next;
};
struct Node* top=NULL;

void push(int data)
{
    struct Node* newnode=new Node;
    newnode->data=data;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    if(top==NULL)
    {
        cout<<"Stack is empty";
    }
    else{
        cout<<"the pop data is:"<<top->data<<endl;
        top=top->next;
    }


}
void display()
{
    if(top==NULL)
    {
        cout<<"Stack is empty";
    }
    struct Node* temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int ch,data;
    
    do{
        cout<<"Enter the choice:";
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"Enter the data to push in stack:";
                cin>>data;
                push(data);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                cout<<"Exit";
                break;
            }
            default:{
                cout<<"Inavlid choice hai";
            }
        }
    }while(ch!=4);
    return 0;
}