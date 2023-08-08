#include<bits/stdc++.h>
using namespace std;
int myqueue[100],n=100,front=-1,rear=-1;

void enqueue(int data)
{
    if(rear>=n-1)
    {
        cout<<"Queue is overflow";
    }
    else{
        if(front==-1)
        {
            front=0;
        }
    rear++;
    myqueue[rear]=data;
   
        
    }
}
void dequeue(){
    if(front<=-1)
    {
        cout<<"The  queue is underflow";
    }
    else{

        myqueue[front];
        front++;
    }
}
void display()
{
    if(front==-1)
    {
        cout<<"Queue is empty;";
    }
    else{
        for(int i=front;i<=rear;i++)
        {
            cout<<myqueue[i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
   int data ,ch;
   do{
      cout<<"Enter the choice:";
      cin>>ch;
      switch(ch){
        case 1:{
            cout<<"Enter the data to push:";
            cin>> data;
            enqueue(data);
            break;
        }
        case 2:{
            dequeue();
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
            cout<<"Invalid choice";
        }


      }
   }
   while(ch!=4);
   return 0;
}