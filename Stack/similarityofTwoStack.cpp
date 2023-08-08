#include<bits/stdc++.h>
using namespace std;
void check(stack<int>s1,stack<int>s2)
{
    int flag=0;
    if(s1.size()!=s2.size())
    {
        cout<<"Stack are not same";
    } 
    else{
        while(!s1.empty() && !s2.empty())
        {
            if(s1.top()!=s2.top())
            {
                flag++;
                cout<<"Stack are not same";
                break;
            }
            else{
                s1.pop();
                s2.pop();
            }
        }
       
    }
    if(flag==0)
    {
        cout<<"Stack are same";
    }
}


int main()
{
    stack<int>s1,s2;
    s1.push(4);
    s1.push(5);
    s1.push(2);
    
    s2.push(4);
    s2.push(5);
    s2.push(2);
    check(s1,s2);
    return 0;

}