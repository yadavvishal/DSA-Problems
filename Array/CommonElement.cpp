#include<bits/stdc++.h>
using namespace std;
 // find the common elements in 3 sorted array
 //  using simple approach
 // Time Complexity of O(n1+n2+n3)
 
void solve(int arr1[],int arr2[],int arr3[],int n1,int n2, int n3)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2 && k< n3){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k])
        {
            j++;
        }
        else{
            k++;
        }
    }

}
int main()
{
    int arr1[]={ 1, 5, 10, 20, 40, 80 };
    int arr2[]={ 6, 7, 20, 80, 100 };
    int arr3[]={ 3, 4, 15, 20, 30, 70, 80, 120 };
    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);
    int n3=sizeof(arr3)/sizeof(int);

    solve(arr1,arr2,arr3,n1,n2,n3);
}