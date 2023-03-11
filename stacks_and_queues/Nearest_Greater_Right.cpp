#include<bits/stdc++.h>
using namespace std;
vector<int> NGR(vector<int> arr)
{
  stack<int> s;
  vector<int> ans;
  for(int i=arr.size()-1;i>=0;i--)
  {
     if(s.empty())
     {
        ans.push_back(-1);
         s.push(arr[i]);
         continue;
     }
     while(s.top()<arr[i])
     {
        if(s.empty())
        {
            ans.push_back(-1);
            break;
        }
        else{
            s.pop();
        }
        
     }
    ans.push_back(s.top());
    s.push(arr[i]);
     
  }
  reverse(ans.begin(),ans.end());
  return ans;
}
int main()
{
   vector<int> ans;
   vector<int> arr = {1,3,2,4};
   ans = NGR(arr);
   for(int i=0;i<ans.size();i++)
   {
     cout<<ans[i]<<" ";
   }
   
}