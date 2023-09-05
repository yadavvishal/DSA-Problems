#include <bits/stdc++.h>
using namespace std;
// To find the closest Number of Given N  which is divisble by M;

int solve(int N, int M)
{
    for (int i = 0; i < 100000; i++)
    {
        if ((N - i) % M == 0 && (N + i) % M == 0)
        {
            if (abs(N + i) > abs(N - i))
            {
                return N + i;
            }
            return N - i;
        }
        else if ((N - i) % M == 0)
        {
            return N - i;
        }
        else if ((N + i) % M == 0)
        {
            return N + i;
        }
    }
    return -1;
}
int main()
{
    int N = 12;
    int M = 5;
    cout<<solve(N,M);
}