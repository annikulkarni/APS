#include<bits/stdc++.h>
using namespace std;
//generate unique subsets 
void findSubsets(vector<int> &arr,vector<int> &ds,vector<vector<int>> &ans,int ind)
{ 
    ans.push_back(ds);
    for(int i=ind;i<arr.size();i++)
    {
        if(i!=ind&&arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        findSubsets(arr,ds,ans,i+1);
        ds.pop_back();
    }
}
int main()
{
  vector<int> v = {1,2,2,2,3,3};
   vector<int> ds;
   vector<vector<int>> ans;
   int ind = 0;
  findSubsets(v,ds,ans,ind);
  for(int i=0;i<ans.size();i++)
  {
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }

}