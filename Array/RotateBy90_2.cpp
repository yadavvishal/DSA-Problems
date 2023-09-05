#include<bits/stdc++.h>
using namespace std;
// Rotate the matrix By 90 ..clockwise
/*
 3  6  9 
 2  5  8 
 1  4  7 
*/
int main()
{

    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    // given
    int n=matrix.size();
    int m=matrix[0].size();

    // First transpose the matrix ..
     for(int i=0;i<n;i++)
    {
        for(int j=i;j<m;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    // Then reverse the matrix by row wise


    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }





}