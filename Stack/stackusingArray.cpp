#include <bits/stdc++.h>
using namespace std;
int mystack[100],n=100,top=-1;

void push(int data)
{
    if(top>=n-1)
    {
        cout<<"Stack is overflow"<<endl;
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
        cout<<"stack is underflow"<<endl;

    }
    else{
        cout<<"Pop data from stack"<<mystack[top]<<endl;
        top--;
    }

}
void display()
{
    if(top>=0)
    {
        cout<<"Stack elements are:";
        for(int i=top;i>=0;i--)
        {
            cout<<mystack[i]<<endl;
            cout<<endl;
        }
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}
int main()
{
    int ch,data;
    cout<<"Push element in stack"<<endl;
    cout<<"Pop element from stack"<<endl;
    cout<<"Print element in stack"<<endl;
    do{
        cout<<"Enter the Choice:";
        cin>>ch;
        switch(ch)
        {
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
                cout<<"Exit"<<endl;
                break;
            }
            default:{
                cout<<"Invalid choice"<<endl;
            }
        }

    }
    while(ch!=4);
    return 0; 
    
}