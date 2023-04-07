#include<bits/stdc++.h>
using namespace std;
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
int binary_search_incr(vector<int> &arr,int l,int h,int t)
{
   int lo = l;
   int hi = h;
   while(lo<=hi)
   {
      int mid = lo + (hi-lo)/2;
      if(arr[mid]==t)
      {
        return mid;
      }
      else if(arr[mid]<t)
      {
        lo = mid+1;
      }
      else{
        hi = mid-1;
      }
   }
   return -1;
}
int binary_search_decr(vector<int> &arr,int l,int h,int t)
{
   int lo = l;
   int hi = h;
   while(lo<=hi)
   {
      int mid = lo + (hi-lo)/2;
      if(arr[mid]==t)
      {
        return mid;
      }
      else if(arr[mid]>t)
      {
        lo = mid+1;
      }
      else{
        hi = mid-1;
      }
   }
   return -1;
}
int search_in_bitonic(vector<int> arr,int t)
{
    int i = findPeakElement(arr);
    cout<<"peak :"<<i<<endl;
    int m = binary_search_incr(arr,0,i,t);
    int n = binary_search_decr(arr,i+1,arr.size()-1,t);
    cout<<"f : "<<m<<endl;
    cout<<"s : "<<n<<endl;
    return max(m,n);
}
int main()
{
    vector<int> arr = {5, 6, 7, 8, 9, 10, 3, 2, 1};
    cout<<search_in_bitonic(arr,1);
}