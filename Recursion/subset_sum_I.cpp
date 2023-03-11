#include<bits/stdc++.h>
using namespace std;
void printSub(int arr[],int i,int n,int sum,vector<int> &ans)
{
    if(i>=n)
    {
        ans.push_back(sum);
        return ;
    }
    
    printSub(arr,i+1,n,sum+arr[i],ans);
    //pick
    
    printSub(arr,i+1,n,sum,ans);
    //not pick
}
// 1 2 1
// 1 2
// 1 1
// 1
// 2 1
// 2
// 1
// {}
int main()
{
   int arr[] = {1,2,1};
   int n = 3;
   vector<int> ans;
   int i = 0;
   int sum = 0;
   printSub(arr,i,n,sum,ans);
   sort(ans.begin(),ans.end());
   for(int i=0;i<ans.size();i++)
   {
     cout<<ans[i]<<" ";
   }
   
}