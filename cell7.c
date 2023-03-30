/* divide and conquer
 you have define a minmax structure , if the size of the array is even, set 0 and 1 element as min and max by comparing and set i = 2,
  if the size of the array is odd , set 0th index as both min and max , and set i = 1 , then in the while loop take the elements pair wise
    i and i+1  , then compare them with min max and update

    number of comparisions

    If n is odd:    3*(n-1)/2
       If n is even:   1 Initial comparison for initializing min and max,
                           and 3(n-2)/2 comparisons for rest of the elements
                      =  1 + 3*(n-2)/2 = 3n/2 -2
*/

#include<stdio.h>
typedef struct Pair
{
    int min,max;

}PAIR;
PAIR getminmax(int arr[],int n)
{
    int i;
    PAIR p;
    if(n%2==0)
    {
        if(arr[0]<arr[1])
        {
            p.min=arr[0];
            p.max=arr[1];
        }
        else
        {
            p.min=arr[1];
            p.max=arr[0];
        }
        i=2;
    }
    else
    {
        p.min=arr[0];
        p.max=arr[0];
        i=1;
    }
    while(i<n-1)
    {
        if(arr[i]<arr[i+1])
        {
            if(arr[i]<p.min)
            {
                p.min=arr[i];
            }
            if(arr[i+1]>p.max)
            {
                p.max=arr[i+1];
            }
        }
        else
        {
            if(arr[i+1]<p.min)
            {
                p.min=arr[i+1];
            }
            if(arr[i]>p.max)
            {
                p.max=arr[i];
            }
        }
        i+=2;
    }
    return p;

}
int main()
{
    int n = 6;
    int arr[6]={2,7,3,5,4,1};
    PAIR p = getminmax(arr,n);
    printf("min = %d\nmax = %d",p.min,p.max);
    return 0;
}
