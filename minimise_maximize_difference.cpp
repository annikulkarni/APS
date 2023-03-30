#include<iostream>
#include<algorithm>
/*sort the array first , then ans will be last element - first element
*/
using namespace std;
int getminDiff(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int ans = arr[n-1]-arr[0];
    int tempmin = arr[0];
    int tempmax = arr[n-1];
    for(int i=1;i<n;i++)
    {
       if(arr[i]-k<0)
       {

       }
       else
       {

        tempmin = min(arr[0]+k,arr[i]-k);
        tempmax = max(arr[i-1]+k,arr[n-1]-k);

        ans = min(ans,tempmax-tempmin);
       }


    }
    return ans;
}
int main()
{
    int arr[4] = {1, 5, 8, 10};
    cout<<getminDiff(arr,4,2);
}
