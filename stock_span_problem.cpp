#include<bits/stdc++.h>
using namespace std;
#define print_vec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define reverse(v) reverse(v.begin(),v.end());
vector<int> stock_span(vector<int> arr)
{
    stack<pair<int,int>> s;
    vector<int> v;
    for(int i=0;i<arr.size();i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(s.top().first>arr[i])
        {
            v.push_back(s.top().second);
        }
        else if(s.top().first<=arr[i])
        {
            while(!s.empty()&&s.top().first<arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    vector<int> ans;
    
    for(int i=0;i<v.size();i++)
    {
        ans.push_back(i-v[i]);
    }
    return ans;

}
int main()
{
   vector<int> v = {100,80,60,70,60,75,85};
   vector<int> ans;

   ans = stock_span(v);
   print_vec(ans);
}