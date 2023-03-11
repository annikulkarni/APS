/*code learnt from anuj bhaiya youtube channel
kadane's algorithm
we go on adding the elements and updating the maxSum if the curSum turns out to be negative we ignore all the prefix of the array upto that point
and continue , the maxSum must be initialized to arr[0] because if all the elements are negative then the max sum is first element itself*/
#include<stdio.h>
long long maxsubArraySum(int arr[],int n)
{
    int curSum=0;
    int maxSum=arr[0];
    for(int i=0;i<n;i++)
    {
        curSum+=arr[i];
        if(curSum>maxSum)
        {
            maxSum=curSum;
        }
        if(curSum<0)
        {
            curSum=0;
        }
    }
    return maxSum;
}
int main()
{
    int arr[5]={1,2,3,-2,5};
    printf("%d",maxsubArraySum(arr,5));
    return 0;

}
