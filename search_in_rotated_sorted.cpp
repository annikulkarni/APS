#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> &temp,int s,int e,int x)
    {
        int lo = s;
        int hi = e;
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            if(temp[mid]==x)
            {
                return mid;
            }
            if(temp[mid]<x)
            {
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return -1;
    }
    int min_index(vector<int> &nums)
    {
        int lo = 0;
        int hi = nums.size()-1;
        int n = nums.size();
        if(nums[lo]<nums[hi])
        {
            return 0;
        }
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            cout<<mid<<" mid"<<endl;
            if(nums[mid]<=nums[(mid-1+n)%n])
            {
                return mid;
            }
            if(nums[mid]>=nums[0])
            {
                lo = mid + 1;
            }
            else{
                hi = mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        int n = nums.size();
        if(n==1&&target==nums[0])
        {
            return 0;
        }
        if(nums[lo]<nums[hi])
        {
            return bs(nums,lo,hi,target);
        }
        int index = min_index(nums);
        cout<<index<<" index"<<endl;
        int ans1 = bs(nums,0,index-1,target);
        int ans2 = bs(nums,index,n-1,target);
        if(ans1>=0)
        {
            return ans1;
        }
        else if(ans2>=0)
        {
            return ans2;
        }
        else{
            return -1;
        }
        
    }
int main()
{

}