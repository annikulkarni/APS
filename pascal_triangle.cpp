#include<bits/stdc++.h>
using namespace std;
vector<vector<long long int>> generate(long long int numRows) {
        long long int dp[numRows][numRows];
        vector<vector<long long int>> ans;
        
        for(long long int i=0;i<numRows;i++)
        {
            for(long long int j=0;j<numRows;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=1;
                    continue;
                }
                else{
                    dp[i][j] = dp[i-1][j]+dp[i][j-1];
                }
                
            }
        }
        

        for(long long int i=0;i<numRows;i++)
        {
            long long int k=i+1;
            long long int m = i;
            long long int n = 0;
            vector<long long int> temp;
            while(k--)
            {
               temp.push_back(dp[m][n]);
               if(m<=numRows-1&&n<=numRows-1)
               {
                  m--;
                  n++;
               }
            }
            ans.push_back(temp);
        }
        for(long long int i=0;i<ans.size();i++)
        {
            for(long long int j=0;j<ans[i].size();j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return ans;
}
int main()
{
   generate(18);
   return 0;
}