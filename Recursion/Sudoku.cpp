#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<string> &board,int row,int col,char c)
{
   for(int i=0;i<9;i++)
   {
      if(board[row][i]==c) return false;
      if(board[i][col]==c) return false;
      if(board[3*(row/3) + (i/3)][3*(col/3) + (i%3)]==c) return false;
   }
   return true;
}
bool sudoku_solver(vector<string> &board)
{
   for(int i=0;i<board.size();i++)
   {
        for(int j=0;j<board[0].size();j++)
        {
            if(board[i][j]=='.')
            {
                for(char k = '1';k<='9';k++)
                {
                    if(isValid(board,i,j,k))
                    {
                        board[i][j] = k;
                        if(sudoku_solver(board)==true)
                        {
                            return true;
                        }
                        else
                            board[i][j]='.';
                        
                    }
                }
                return false;   
            }
        }
   }
   return true;
}

int main()
{
   string s(9,'.');
   vector<string> board(9);
   for(int i=0;i<9;i++)
   {
      board[i] = s;
   }
   sudoku_solver(board);
   for(int i=0;i<board.size();i++)
   {
        for(int j=0;j<board[i].size();j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
   }

}