#include<bits/stdc++.h>
using namespace std;
int countSub(int arr[],int i,int n,int sum,int k)
{
    cout<<"hi"<<endl;
    if(i==n)
    {
        if(sum==k)
        {
          return 1;
          //condition satisfied
        }
        else 
        {
            return 0;
        }
        //condition not satisfied
    }
 
    sum+=arr[i];
    int l = countSub(arr,i+1,n,sum,k);
    sum-=arr[i];
    int r = countSub(arr,i+1,n,sum,k);
    return l+r;
}
int main()
{
   int arr[] = {1,2,1,1};
   int n = 4;
   int i = 0;
   int k = 2;
   int sum = 0;
   cout<<countSub(arr,i,n,sum,k);
   
}