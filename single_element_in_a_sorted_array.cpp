#include<bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
        int xo = 0;
        for(int x:nums)
        {
            xo = xo^x;
        }
        return xo;
    }
int main()
{

}