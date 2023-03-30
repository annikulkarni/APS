#include<bits/stdc++.h>
using namespace std;

// set is the subset
// sos is sum of subset
// tar is target
void printTargetSumSubsets(vector<int> arr, int idx, string set, int sos, int tar) {
  //write your code here
  if(idx>=arr.size())
  {
       if(sos==tar)
      {
          set.push_back('.');
          cout<<set<<endl;
      }
      return;
  }

      sos+=arr[idx];
      string x = to_string(arr[idx]);
      x+=',';

      
      printTargetSumSubsets(arr,idx+1,set+x,sos,tar);
      sos-=arr[idx];
      printTargetSumSubsets(arr,idx+1,set,sos,tar);

}


int main() {
   vector<int> arr = {10,20,30,40,50};
   printTargetSumSubsets(arr,0,"",0,60);
}