#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int hi = nums.size() - 1;
    int lo = 0;
    int res = nums.size();
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        cout << mid << endl;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            lo = mid + 1;
        }
        else if (nums[mid] > target)
        {
            hi = mid - 1;
        }
    }
    return lo;
}
int main()
{
    return 0;
}