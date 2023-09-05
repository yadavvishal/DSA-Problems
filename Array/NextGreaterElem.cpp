#include <bits/stdc++.h>
using namespace std;
// To find the next greater in nums2 if not present then put -1
// Brute force approach

int main()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    int k;
    int l1 = nums1.size();
    int l2 = nums2.size();
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (nums1[i] == nums2[j])
            {
                for (k = j + 1; k < l2; k++)
                {
                    if (nums2[k] > nums1[i])
                    {
                        nums1[i] = nums2[k];
                        break;
                    }
                }
                if (k == l2)
                {
                    nums1[i] = -1;
                }
                break;
            }
        }
    }
    for (int i = 0; i < l1; i++)
    {
        cout << nums1[i] << " ";
    }
}