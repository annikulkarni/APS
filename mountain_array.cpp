#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo = 0;
        int hi=arr.size()-1;
        if(arr.size()==1)
        {
            return 0;
        }
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            if(mid==0)
            {
                if(arr[0]>arr[1])
                {
                    return 0;
                }
               
            }
            if(mid==arr.size()-1)
            {
                if(arr[arr.size()-1]>arr[arr.size()-2])
                {
                    return arr.size()-1;
                }
               
            }
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
            {
                return mid;
            }
            else if(arr[mid+1]>arr[mid])
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

}