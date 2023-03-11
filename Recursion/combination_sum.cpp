#include<bits/stdc++.h>
using namespace std;
void comination_sum(int arr[],vector<vector<int>> &ans , vector<int> &ds,int target, int ind, int n)
{
    if(ind == n)
    {
      if(target==0)
      {
        ans.push_back(ds);
      }
      return;
    }
    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        comination_sum(arr,ans,ds,target-arr[ind],ind,n);
        ds.pop_back();
    }
    comination_sum(arr,ans,ds,target,ind+1,n);
}
int main()
{
    vector<vector<int>> ans;
    vector<int> ds;
    int arr[] = {1,2,7,6,3,4};
    comination_sum(arr,ans,ds,7,0,6);
    for(int i=0;i<ans.size();i++)
    {
      for(int j=0;j<ans[i].size();j++)
      {
        cout<<ans[i][j]<<" ";
      }
      cout<<endl;
    }
}