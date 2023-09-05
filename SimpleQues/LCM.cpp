#include<bits/stdc++.h>
using namespace std;
// To find the LCM between two number 

int main()
{
    int  a=3;
    int b=5;
    
    for(int k=a;k<=a*b;k++)
    {
        // maximum range a*b matlb inke beech me hogi lcm
        
        if(k%a==0 && k%b==0)
        {
            cout<<k;
            break;
        }
    }

}