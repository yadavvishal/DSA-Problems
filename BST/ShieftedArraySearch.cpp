#include <iostream>
#include <vector>
// This is modefied binary search problem
// Time Complexicity O(logN)
// sorted Rotated Problem

using namespace std;

int shiftedArrSearch(const vector<int> &shiftArr, int num)
{
    // your code goes here
    int low = 0;
    int high = shiftArr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (shiftArr[mid] == num)
        {
            return mid;
        }
        if (shiftArr[low] <= shiftArr[mid])
        {
            if (shiftArr[low] <= num && num < shiftArr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
            {
            if(shiftArr[mid]<num && num<=shiftArr[high])
            {
                    low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {9, 12, 17, 2, 4, 5};
    int num = 2;
    int ans = shiftedArrSearch(arr, num);
    cout<<ans;
    return 0;
}