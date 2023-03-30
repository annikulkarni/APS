#include<bits/stdc++.h>
using namespace std;
string lcp(string s1,string s2)
    {
        
        int m = s1.size();
        int n = s2.size();

        string re;
        int index = 0;
        int ans = 0;
        int i = 0;
        int j = 0;
        while(i<m&&j<n)
        {
            if(s1[i]==s2[j])
            {
                i++;
                j++;
                ans++;
            }
            else{
                break;
            }
        }
        re = s1.substr(0,ans);
        cout<<re<<" "<<endl;
        return re;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=0;i<strs.size();i++)
        {
            ans = lcp(ans,strs[i]);
        }
        return ans;
    }
int main()
{
    return 0;
}