#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s1 = "abbeac";
    string s2 = "abtt";
    int freq[26] = {0};
    for(int i=0;i<s1.size();i++)
    {
        freq[s1[i]-'a']++;
    }
    int count = 0;
    for(int i=0;i<s2.size();i++)
    {
        if(freq[s2[i]-'a']>0)
        {
            count++;
        }
    }
    cout<<count<<endl;
}