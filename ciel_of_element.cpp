#include<bits/stdc++.h>
using namespace std;
int ceil_arr(vector<int> v,int x)
{
   int hi = v.size()-1;
   int lo = 0;
   int res = -1;
   while(lo<=hi)
   {
      int mid = lo + (hi-lo)/2;
      if(v[mid]==x)
      {
        return mid;
      }
      else if(v[mid]>x)
      {
         res = mid;
         hi = mid-1;
      }
      else
      {
         
         lo = mid+1;
      }
   }
   return res;
}
int main()
{
   vector<int> v = {1, 2, 8, 10, 10, 12, 19};
   cout<<ceil_arr(v,9);

}