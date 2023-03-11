/*count the number of 0's , 1's , 2's and place them accordingly in the array*/
#include<stdio.h>
void sort012(int arr[],int n)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cnt0++;
        }
        if(arr[i]==1)
        {
            cnt1++;
        }
        if(arr[i]==2)
        {
            cnt2++;
        }
    }
    int i=0;
    while(cnt0--)
    {
        arr[i]=0;
        i++;
    }
    while(cnt1--)
    {
        arr[i]=1;
        i++;
    }
    while(cnt2--)
    {
        arr[i]=2;
        i++;
    }
    for(int i=0;i<12;i++)
    {
        printf("%d ",arr[i]);
    }

}
int main()
{
    int arr[12]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    sort012(arr,12);

    return 0;
}
