#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> v,int target)
{
    int hi = v.size()-1;
    int lo = 0;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(v[mid]==target)
        {
            return 0;
        }
        else if(v[mid]<target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    if(v[hi]>v[lo])
    {
        return v[lo];
    }
    else{
        return v[hi];
    }
}
int main()
{
     vector<int> v = {1,3,8,10,15};
     cout<<bs(v,12);
}