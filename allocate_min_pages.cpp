#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<int> arr,int k, int mx)
{
    int students = 1;
    int sum = 0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        if(sum>mx)
        {
            students++;
            sum = arr[i];
        }
        if(students>k)
        {
            return false;
        }

    }
    return true;
}
int allocate_books(vector<int> arr,int k)
{
    int lo = 0;
    int hi = 0;
    int res = -1;
    for(int i=0;i<arr.size();i++)
    {
        lo = max(lo,arr[i]);
        hi+=arr[i];
    }
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(isValid(arr,k,mid))
        {
            res = mid;
            hi = mid-1;
        }
        else 
        {
            lo = mid+1;
        }
    }
    return res;
}
int main()
{
    vector<int>arr = {10,30,30,40,20,11,17,23};
    cout<<allocate_books(arr,2);
}