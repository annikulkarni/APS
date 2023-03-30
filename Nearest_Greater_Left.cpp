#include<bits/stdc++.h>
using namespace std;
#define print_vec(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
#define reverse(v) reverse(v.begin(),v.end());
vector<int> NGL(vector<int> arr)
{
    stack<int> s;
    vector<int> v;
    for(int i=0;i<arr.size();i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.top()<=arr[i])
        {
            while(!s.empty()&&s.top()<arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    return v;
}
int main()
{
   vector<int> v = {1,3,5,2,4};
   vector<int> ans;

   ans = NGL(v);
   print_vec(ans);
}