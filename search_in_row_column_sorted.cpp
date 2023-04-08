#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size() - 1;
    int n = matrix[0].size() - 1;
    int i = 0;
    int j = matrix[0].size() - 1;
    while (i >= 0 && i <= m && j >= 0 && j <= n)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        else if (matrix[i][j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix ={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(matrix,100);
    return 0;
}