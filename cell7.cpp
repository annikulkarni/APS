#include<iostream>
using namespace std;
int maxi(int *arr, int n)
{
    int maxi = arr[0];
   for(int i=0;i<n;i++)
   {
     if(arr[i]>maxi)
     {
         maxi = arr[i];
     }
   }
   return maxi;
}
int mini(int *arr,int n)
{
    int mini = arr[0];
   for(int i=0;i<n;i++)
   {
     if(arr[i]<mini)
     {
         mini = arr[i];
     }
   }
   return mini;
}
int main()
{
    int n = 5;
    int arr[n]={4,6,1,3,2};
    cout<<maxi(arr,n)<<endl;
    cout<<mini(arr,n)<<endl;

}