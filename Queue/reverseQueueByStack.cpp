#include <bits/stdc++.h>
using namespace std;

void reverse(queue<int>&q)
{
    stack<int>s;
    queue<int>newq=q;
    while(!newq.empty())
    {
        s.push(newq.front());
        newq.pop();
    }

    while(!s.empty())
    {
        newq.push(s.top());
        s.pop();
    }
    q=newq;
   
}

void display(queue<int>q)
{
    queue<int>newq=q;
    while(!newq.empty())
    {
        cout<<newq.front()<<" ";
        newq.pop();
    }
    cout<<endl;
}

int main()
{
    queue<int>q;
    q.push(45);
    q.push(4);
    q.push(9);
    q.push(17);
    q.push(20);
    display(q);
    cout<<"Queue after reverse the queue:";
    reverse(q);
    display(q);
    return 0;


}
