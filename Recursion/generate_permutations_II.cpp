#include <bits/stdc++.h>
using namespace std;
void permutations(int ind, vector<int> &arr, vector<vector<int>> &ans)
{
    if (ind == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        swap(arr[ind], arr[i]);
        permutations(ind + 1, arr, ans);
        swap(arr[ind], arr[i]);
    }
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    vector<int> ds;
    int ind = 0;
    permutations(ind, arr, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " "; 
        }
        cout << endl;
    }
}