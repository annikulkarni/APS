#include<bits/stdc++.h>
using namespace std;
int search(vector<int> v,int x)
{
    int hi = v.size()-1;
    int lo = 0;
    while(hi>=lo)
    {
        int mid = hi - (hi-lo)/2;
       
        if(v[mid]==x)
        {
            return mid;
        }
        if(mid< hi&&v[mid+1]==x)
        {
            return mid+1;
        }
        if(mid> lo&&v[mid-1]==x)
        {
            return mid-1;
        }
        if(v[mid]<x)
        {
            lo = mid+2;
        }
        if(v[mid]>x)
        {
            hi = mid-2;
        }
    }
    return -1;

}
int main()
{
   vector<int> v = { 3, 2, 10, 4, 40 };
   cout<<search(v,4);

}