/*
    Author: Prajwal Patil
    Created: 2023-02-24 13:06:50
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
    char ch;
    int bvc = 0, msk = 0, i = 0, q = 0, x = 0, l = 0, r = 0, type = 0;
    string s, a;
    cin >> s;
    cin >> q;
    a.resize(s.length());
    copy(s.begin(), s.end(), a.begin());
    for (int j = 0; j < q; j++)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> l >> r >> ch;
            for (i = l - 1; i <= r - 1; i++)
                a[i] = ch;
        }
        else
        {
            bvc = 0;
            msk = 0;
            cin >> l >> r;
            for (i = l - 1; i < r; i++)
            {
                x = a[i] - 'a';
                msk = 1 << x;
                bvc = bvc ^ msk;
            }
            if (!(bvc & (bvc - 1)))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}