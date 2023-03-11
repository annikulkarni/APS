/*
    Author: Prajwal Patil
    Created: 2023-02-24 13:22:30
*/

#include <bits/stdc++.h>
using namespace std;
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int minVal(int N, vector<int> A, vector<int> B, vector<int> C)
{
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());
    int i = 0, j = 0, k = 0, result = INT_MAX;
    int temp = 0;
    while (i < N && j < N && k < N)
    {
        temp = abs(A[i] - B[i]) + abs(B[i] - C[i]) + abs(C[i] - A[i]);
        if (temp < result)
            result = temp;
        if (A[i] <= B[j] && A[i] <= C[k])
            i++;
        else if (B[j] <= C[k])
            j++;
        else
            k++;
    }
    return result;
}

int main()
{
    fastIO;
    int N;
    cin >> N;
    vector<int> a, b, c;
    a.resize(N);
    b.resize(N);
    c.resize(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < N; i++)
        cin >> b[i];
    for (int i = 0; i < N; i++)
        cin >> c[i];
    cout << minVal(N, a, b, c) << endl;
    return 0;
}