#include <bits/stdc++.h>
using namespace std;
char nextGreatestLetter(vector<char> &letters, char target)
{
    char ans = letters[0];
    int lo = 0;
    int hi = letters.size() - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (letters[mid] == target)
        {

            if (mid < letters.size() - 1)
            {
                if (letters[mid + 1] == letters[mid])
                {
                    lo = mid + 1;
                }
                else
                {
                    return letters[mid + 1];
                }
            }
            else
            {
                return letters[0];
            }
        }
        if (letters[mid] > target)
        {
            ans = letters[mid];
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}
int main()
{
    return 0;
}