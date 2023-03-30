#include<stdio.h>

void sort012(int a[], int n)
{
    int low  = 0;
    int high = n;


    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            int temp = a[i];
            a[i]=a[low];
            a[low]=temp;
            low++;
        }
        if(a[i]==2)
        {
            int temp = a[i];
            a[i]=a[low];
            a[low]=temp;
            high--;
            i--;
        }
    }
}
int main()
{
    int arr[5]={0,2,1,2,0};
    sort012(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
