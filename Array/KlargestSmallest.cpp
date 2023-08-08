#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={23,7,9,4,88,22};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);

    // to find the K largest element in array

    sort(arr,arr+n,greater<int>());
    cout<<arr[k];

    cout<<endl;
    // to find the k smallest elment in array
    sort(arr,arr+n);
    cout<<arr[k];
    return 0;
}

// time complexicity of O(NlogN);