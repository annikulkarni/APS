#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    int flag = 0;
    ll n;
    ll actual_sum = 0;
    ll sum = 0;
    ll temp = 0;
    while (t--)
    {
        
        cin >> n;
        sum = 0;
        actual_sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> temp;
            sum += temp;
            actual_sum += i;
            if (actual_sum > sum)
            {
                flag = 1;
            }
        }
        if (sum == actual_sum && flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}