#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long int sum = 0;
        int n = nums.size();
        for(int i=0;i<nums.size()/2;i++)
        {
             string s1 = to_string(nums[i]);
             string s2 = to_string(nums[n-i-1]);
             long long int x = stoi(s1+s2);
             sum = sum+x;
             cout<<x<<endl;
        }
        if(nums.size()%2==1)
        {
            string s1 = to_string(nums[nums.size()/2]);
            long long int x = stoi(s1);
            sum+=x;
            cout<<x<<endl;
        }
        return sum;
    }
};
int main()
{
    return 0;
}