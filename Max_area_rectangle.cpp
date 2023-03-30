#include <bits/stdc++.h>
using namespace std;
void print_vec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
vector<int> NSR(vector<int> &v)
{
    stack<pair<int, int>> s;
    vector<int> ans;
    int ext = v.size();
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            ans.push_back(ext);
        }
        else if (v[i] > s.top().first)
        {
            ans.push_back(s.top().second);
        }
        else
        {
            while (!s.empty() && s.top().first >= v[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ans.push_back(ext);
            }
            else
            {
                ans.push_back(s.top().second);
            }
        }
        s.push({v[i], i});
    }
    reverse(ans.begin(), ans.end());    
    return ans;
}
vector<int> NSL(vector<int> v)
{
    stack<pair<int, int>> s;
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (s.empty())
        {
            ans.push_back(-1);
        }
        else if (s.top().first < v[i])
        {
            ans.push_back(s.top().second);
        }
        else
        {
            while (s.top().first >= v[i] && !s.empty())
            {
                s.pop();
            }
            if (s.empty())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top().second);
            }
        }
        s.push({v[i], i});
    }
    return ans;
}
int MAH(vector<int> v)
{
    vector<int> width;
    vector<int> NR = NSR(v);
    vector<int> NL = NSL(v);
    int area = 0;
    for (int i = 0; i < v.size(); i++)
    {
        width.push_back(NR[i] - NL[i] - 1);
    }
    
    for (int i = 0; i < NR.size(); i++)
    {
        area = max(area, v[i] * width[i]);
    }
    return area;
}

int maximalRectangle(vector<vector<char>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    cout<<m<<" "<<n<<endl;
    vector<int> v(n,0);
    int ans = 0;
    
   
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
           
            if (matrix[i][j] == '0')
            {
                
                v[j] = 0;
            }
            else
            {
                v[j] += matrix[i][j] - '0';
            }
        }
        print_vec(v);
        int m = MAH(v);
        ans = max(ans,m);
    }
    return ans;
}
int main()
{
    vector<vector<char>> matrix = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    cout<<maximalRectangle(matrix);
    return 0;
}