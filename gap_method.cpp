#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void sort_sorted_arrays(int *a,int *b,int m,int n)
{
    int gap = ceil((m+n)/2);
    

        
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