//code learnt from stiver 
// time complexity is O(pow(2,n)*n)
// stack space is O(n);
//this code prints any one subsequence with sum k 
// here you have to return true that we got the subsequence and the program 
//terminates thereafter no need to do further operations

#include<bits/stdc++.h>
using namespace std;
bool printSub(int arr[],vector<int> &sd,int i,int n,int sum,int k)
{
    if(i==n)
    {
        if(sum==k)
        {
            for(int i=0;i<sd.size();i++)
            {
                cout<<sd[i]<<" ";
            }
          cout<<endl;
          return true;
          //condition satisfied
        }
        else return false;
        //condition not satisfied
        
    }
    sd.push_back(arr[i]);
    sum+=arr[i];
    if(printSub(arr,sd,i+1,n,sum,k)==true)
    {
        return true;
    }
    sd.pop_back();
    sum-=arr[i];
    if(printSub(arr,sd,i+1,n,sum,k)==true)
    {
        return true;
    }
    return false;
}
int main()
{
   int arr[] = {1,2,1};
   int n = 3;
   vector<int> sd;
   int i = 0;
   int k = 2;
   int sum = 0;
   printSub(arr,sd,i,n,sum,k);
   
}