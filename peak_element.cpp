#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int lo = 0;
        int hi = nums.size()-1;
        if(hi+1==1)
        {
            return 0;
        }


        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            if(mid==0)
            {
                if(nums[0]>nums[1])
                {
                    return 0;
                }
            }
            if(mid==nums.size()-1)
            {
                if(nums[nums.size()-1]>nums[nums.size()-2])
                {
                    return nums.size()-1;
                }
            }
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1])
            {
                return mid;
            }
            else if(nums[mid+1]>nums[mid])
            {
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return 0;
    }
};
int main()
{
    return 0;
}