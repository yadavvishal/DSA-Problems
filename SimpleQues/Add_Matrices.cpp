#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int n=2;
    int m=2;
    int matrix1[n][m];
    int matrix2[n][m];
    int ans[100][100];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix1[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix2[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans[i][j]=matrix1[i][j]+matrix2[i][j];
           
        }
    }
    cout<<"Sum of two matrixes are:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans[i][j]<<" ";

        }
        cout<<endl;
    }
   
   

    
}