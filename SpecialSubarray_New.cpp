/*
    Author: Prajwal Patil
    Created: 2023-02-18 15:57:45
*/

#include <bits/stdc++.h>
using namespace std;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

unsigned long long getCount(vector<int> arr, int N)
{
    unsigned long long start = 0, ans = 0, num = 0;
    for (unsigned long long end = 0; end < N; end++)
    {
        while (start < N && num + arr[start] == (num ^ arr[start]))
        {
            num += arr[start];
            start++;
        }
        ans += start - end;
        if (end == start)
            start++;
        else
            num -= arr[end];
    }
    return ans;
}

int main()
{
    fastIO;
    vector<int> vc;
    unsigned int T = 0, N = 0, temp = 0;
    unsigned long long count = 0;
    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> temp;
            vc.push_back(temp);
        }
        count = getCount(vc, N);
        cout << count << endl;
        vc.clear();
    }
    return 0;
}
