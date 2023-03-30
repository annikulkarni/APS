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
vector<int> NSL(vector<int> &v)
{
    stack<pair<int, int>> s;
    vector<int> ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (s.empty())
        {
            ans.push_back(-1);
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
int largestRectangleArea(vector<int> &heights)
{
    vector<int> width;
    vector<int> a = NSR(heights);
    print_vec(a);
    vector<int> b = NSL(heights);
    print_vec(b);
    for (int i = 0; i < a.size(); i++)
    {
        width.push_back(a[i] - b[i] - 1);
    }
    print_vec(width);
    int ans = 0;
    for (int i = 0; i < width.size(); i++)
    {
        ans = max(ans, heights[i] * width[i]);
    }
    return ans;
}
int main()
{
  vector<int>  heights = {6,2,5,4,5,1,6};
  cout<<largestRectangleArea(heights); 
}