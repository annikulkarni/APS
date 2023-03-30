#include<bits/stdc++.h>
using namespace std;
#define printvec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
vector<int> NSR(vector<int> v)
{
    stack<int> s;
    vector<int> ans;
    for(int i=v.size()-1;i>=0; i--)
    {
        if(s.empty())
        {
            ans.push_back(-1);
        }
        else if(s.top()<v[i])
        {
            ans.push_back(s.top());
        }
        else
        {
            while(s.top()>v[i]&&!s.empty())
            {
                s.pop();
            }
            if(s.empty())
            {
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top());
            }
        }
        s.push(v[i]);
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
   vector<int> v = { 5,5,5};
   vector<int>ans = NSR(v);
   printvec(ans);
}