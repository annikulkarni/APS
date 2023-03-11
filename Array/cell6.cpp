#include<iostream>
using namespace std;
int * reverse(int * arr,int n)
{
  for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    return arr;
}
int main()
{
    int n = 5;
    int arr[n]={1,2,3,4,5};

    //int arr1[4] = reverse_array(arr,4);
    int *arr1 = reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}