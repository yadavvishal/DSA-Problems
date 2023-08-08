#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>v={23,42,21,8,4,6};
     for(auto x:v)
     {
        cout<<x<<" ";

     }
     cout<<endl;
     make_heap(v.begin(),v.end());
     for(auto x:v)
     {
        cout<<x<<" ";
     }
     cout<<endl;
     if(is_heap(v.begin(),v.end()))
     {
        cout<<"Yes";
     }
     else{
        cout<<"No";
     }
     return  0;
}