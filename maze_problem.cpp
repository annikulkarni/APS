#include<bits/stdc++.h>
using namespace std;
void maze(int row,int column,string &ds,vector<string> &ans,int m,int n)
{
  
  if(row==m-1&&column==n-1)
  {
    ans.push_back(ds);
    return;
  }
  if(row>m-1||column>n-1)
  {
    return;
  }
  ds.push_back('h');
  maze(row,column+1,ds,ans,m,n);
  ds.pop_back();
  ds.push_back('v');
  maze(row+1,column,ds,ans,m,n);
  ds.pop_back();
}
int main()
{
   vector<string> ans;
   string ds;
   int m = 4;
   int n = 5;
   maze(0,0,ds,ans,m,n);
   for(int i=0;i<ans.size();i++)
   {
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j];
    }
    cout<<endl;
   }
   return 0;
}