#include<bits/stdc++.h>
using namespace std;

//  bits/stdcc.h ...header file me stack by default

int mystack[100],n=100,top=-1;

void push(int data)
{
    if(top>=n-1)
    {
        cout<<"Stack is empty"<<endl;

    }
    else{
        top++;
        mystack[top]=data;
        
    }

}
void pop()
{
    if(top<=-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<" The pop data is: "<<mystack[top]<<endl;
        top--;
    }
}


void display()
{
    if(top>0)
    {
        for(int i=top;i>=0;i--)
        {
            cout<<mystack[i]<<" ";
            cout<<endl;
        }
    }
}

int main()
{
    int ch,data;
    
    do{
        cout<<"Enter the choice:";
        cin>>ch;
        switch(ch){

        
            case 1: {
                cout<<"Enter the pushed data";
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
                cout<<"Invalid choice haii ";
            }
        }
    }while(ch!=4);

    
    display();
    return 0;
}