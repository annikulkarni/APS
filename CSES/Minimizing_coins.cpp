#include <bits/stdc++.h>
using namespace std;

int m_coins(vector<int> v, int sum)
{
    vector<int> dp(sum + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= sum; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if ((i - v[j]) > 0)
            {
                dp[i] = min(dp[i], dp[i - v[j]] + 1);
            }
            else if (i - v[j] == 0)
            {
                dp[i] = 1;
            }
        }
    }
    if (dp[sum] == 1e9)
    {
        return -1;
    }
    return dp[sum];
}

int main()
{
    int sum, n, temp;
    cin >> n >> sum;
    vector<int> coins;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        coins.push_back(temp);
    }
    cout << m_coins(coins, sum);
    return 0;
}