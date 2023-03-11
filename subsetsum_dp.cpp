#include<bits/stdc++.h>
using namespace std;
int subset_sum(vector<int> arr,int sum)
{
    int n = arr.size();
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
             if(i==0&&j==0)
             {
                dp[i][j]=1;
                continue;
             }
             if(j==0)
             {
                dp[i][j]=1;
                continue;
             }
             if(i==0)
             {
                dp[i][j]=0;
                continue;
             }
             

        }
    }
}
int main()
{

}