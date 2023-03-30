/*
    Author: Prajwal Patil
    Created: 2023-02-20 17:07:16
*/

#include <bits/stdc++.h>
using namespace std;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fastIO;
    unsigned long long T = 0, N = 0, temp = 0, sum = 0, check = 0, actualSum = 0;
    cin >> T;
    int flag = 0;
    while (T--)
    {
        cin >> N;
        sum = 0;
        flag = 0;
        actualSum = 0;
        for (unsigned long long i = 1; i <= N; i++)
        {
            cin >> temp;
            sum += temp;
            actualSum += i;
            if (actualSum > sum)
            {
                flag = 1;
            }
        }
        if (sum == actualSum && flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}