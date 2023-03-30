#include <bits/stdc++.h>
using namespace std;
void N_Queen(int col, vector<vector<string>> &ans, vector<string> &board, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal, int n)
{
    
    if (col == n)
    {
        ans.push_back(board);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        
        if (leftRow[row] == 0 && lowerDiagonal[col + row] == 0 && upperDiagonal[n - 1 + col - row] == 0)
        {
            
            board[row][col] = 'Q';
            leftRow[row] = 1;
            upperDiagonal[n - 1 + col - row] = 1;
            lowerDiagonal[col + row] = 1;
            N_Queen(col+1, ans, board, leftRow, upperDiagonal, lowerDiagonal, n);
            board[row][col] = '.';
            leftRow[row] = 0;
            lowerDiagonal[col + row] = 0;
            upperDiagonal[n - 1 + col - row] = 0;
        }
    }
}
int main()
{
    int n = 4;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }

    vector<vector<string>> ans;
    vector<int> leftRow(n, 0);
    vector<int> lowerDiagonal((2 * n) - 1, 0);
    vector<int> upperDiagonal((2 * n) - 1, 0);
    N_Queen(0, ans, board, leftRow, upperDiagonal, lowerDiagonal, n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            for (int k = 0; k < ans[i][j].size(); k++)
            {
                cout << ans[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}