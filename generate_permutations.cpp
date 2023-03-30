#include<bits/stdc++.h>
using namespace std;
void generate_permutations(vector<int> arr,vector<int>&ds,vector<vector<int>> &ans,int freq[])
{
    if(ds.size()==arr.size())
    {
        ans.push_back(ds);
        return ;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(freq[arr[i]]==1)
        {
            continue;
        }
        else{
            ds.push_back(arr[i]);
            freq[arr[i]]=1;
            generate_permutations(arr,ds,ans,freq);
            ds.pop_back();
            freq[arr[i]]=0;
        }
    }
 

}
int main()
{
   vector<int> v= {1,2,3,5};
   vector<int> ds;
   vector<vector<int>> ans;
   int freq[v.size()] = {0};
 
   generate_permutations(v,ds,ans,freq);
   for(int i=0;i<ans.size();i++)
   {
    for(int j=0;j<ans[i].size();j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
}