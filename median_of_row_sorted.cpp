#include<bits/stdc++.h>
using namespace std;
int count_mid(vector<int> &v,int m)
{
    int lo = 0;
    int hi = v.size()-1;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(v[mid]<=m)
        {
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return lo;
} 
int median(vector<vector<int>> &v)
{
    int m = v.size();
    int n = v[0].size();
    int lo = 1;
    int hi = 1e9;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        int sum = 0;
        for(int i=0;i<v.size();i++)
        {
            sum+=count_mid(v[i],mid);
        }
        if(sum<=(n*m)/2)
        {
            lo = mid + 1;
        }
        else {

            hi = mid-1;
        }
    }
    return lo;
}
int main()
{
    vector<vector<int>> v = {{1,3,5},{2,6,9},{3,6,9}};
    cout<<median(v);

}