#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int n = nums.size();
        
        if(n==1)
        {
            return nums[0];
        }
        
        if(nums[0]<=nums[end])
        {
            return nums[0];
        }
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            cout<<nums[mid]<<endl;
            
            if(nums[mid]<=nums[(mid+n-1)%n])
            {
                return nums[mid];
            }
            else if(nums[mid]>=nums[0])
            {
                start = mid+1;
            }
            else end = mid-1;
            cout<<nums[start]<<" start "<<endl;
            cout<<nums[end]<<" end "<<endl;

        }
        return -1;
    }
int main()
{
    return 0;
}