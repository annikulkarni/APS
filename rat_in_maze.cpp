#include<bits/stdc++.h>
using namespace std;
void rat(vector<string> &ans,string &ds,vector<vector<int>> &vis,int i,int j,int n)
{
    if(i==n-1&&j==n-1)
    {
       ans.push_back(ds);
       return ;
    }
    string dir = "DULR";
    for(int i=0;i<dir.size();i++)
    {
        
    }
    

}
int main()
{
   vector<string> ans;
   string ds;
   vector<vector<int>> maze =  {{1, 0, 0, 0},{1, 1, 0, 1}, {1, 1, 0, 0},{0, 1, 1, 1}};
   int n = 4;
   vector<vector<int>> vis(n,vector<int> (n,0));

   

}