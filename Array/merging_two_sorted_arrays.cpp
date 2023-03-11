#include<iostream>
#include<algorithm>
using namespace std;
void sort_sorted_arrays(int *a,int *b,int m,int n)
{
    for(int i=0;i<m;i++)
    {
        if(a[i]>b[0]&&i<n)
        {
           swap(a[i],b[0]);
        }
        int first = b[0];
        int k;
        for(k=1;k<n&&b[k]<first;k++)
        {
            b[k-1] = b[k];
        }
        b[k-1] = first;
    }
        
}
int main()
{
   int arr1[] = {1,3,5,7};
   int arr2[] = {0,2,6,8,9};

   sort_sorted_arrays(arr1,arr2,4,5);
    for(int i=0;i<4;i++)
    {
        cout<<arr1[i]<<" ";
    }
   
   for(int i=0;i<5;i++)
   {
    cout<<arr2[i]<<" ";
   }

}