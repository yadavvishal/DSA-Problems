#include<bits/stdc++.h>
using namespace std;
// To print the star pattern
/*

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

*/
int main()
{
    int n=5;
    for(int i=0;i<n;i++)
    {
        int space=i;
        for(int j=0;j<2*n-i-1;j++)
        {
            if(space)
            {
                cout<<" ";
                space--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}