#include<stdio.h>
void move_negatives(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    while(low<high)
    {
        if(arr[low]<0)
        {
            low++;
        }
        else if(arr[high]>0)
        {
            high--;
        }
        else
        {
            int temp = arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
        }
    }
}
int main()
{
    int arr[5]={2,-4,5,3,-8};
    move_negatives(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
