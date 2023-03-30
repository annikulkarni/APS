#include<iostream>
using namespace std;
void reverse(int *arr,int l,int r){
    if(l>=r)
    {
        return ;
    }
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;
    reverse(arr,l+1,r-1);
}
int main()
{
    int arr[] = {1,5,2,4,6,8,0};
    reverse(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }

}