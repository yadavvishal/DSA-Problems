#include<bits/stdc++.h>
using namespace std;
void  display(queue<int>q)
{
    queue<int>newq=q;
    while(!newq.empty())
    {
        cout<<newq.front()<<" ";
        newq.pop();
    }
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(39);
    q.push(34);
    q.push(5);
    q.push(3);
    display(q);
    
}