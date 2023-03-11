//code learnt from stiver 
// time complexity is O(pow(2,n)*n)
// stack space is O(n);
#include<bits/stdc++.h>
using namespace std;
void printSub(int arr[],vector<int> &sd,int i,int n,int sum,int k)
{
    if(i>=n)
    {
        if(sum==k)
        {
            for(int i=0;i<sd.size();i++)
            {
                cout<<sd[i]<<" ";
            }
        cout<<endl;
        
        }
        return;
        
    }
    sd.push_back(arr[i]);
    sum+=arr[i];
    printSub(arr,sd,i+1,n,sum,k);
    sd.pop_back();
    sum-=arr[i];
    printSub(arr,sd,i+1,n,sum,k);
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