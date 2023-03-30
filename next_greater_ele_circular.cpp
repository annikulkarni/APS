#include<bits/stdc++.h>
using namespace std;
#define print_vec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
vector<int> nge(vector<int> v)
{
    stack<int> s;
    int n = v.size();
    vector<int> ans;

    for(int i=2*n-1;i>=0;i--)
    {
        while(!s.empty()&&s.top()<=v[i%n])
        {
            s.pop();
        }
        if(i<n)
        {
            if(s.empty())
            {
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top());
            }
        }
        s.push(v[i%n]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    vector<int> v = {2,10,12,1,11};
    vector<int> ans = nge(v);
    print_vec(ans);
}