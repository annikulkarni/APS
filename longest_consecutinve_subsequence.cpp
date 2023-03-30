#include<iostream>
#include<algorithm>
using namespace std;
void findLongestConseqSubseq(int arr[], int N)
    {
        sort(arr,arr+N);
        for(int i=0;i<N;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int len = 1;
        int max_len = 1;
        for(int i=1;i<N;i++)
        {
            cout<<i<<endl;
            if(arr[i]-arr[i-1]==0)
            {
               
            }
            else if(arr[i]-arr[i-1]==1)
            {
                len++;
            }
            else{
                max_len = max(max_len,len);
                len = 1;
            }
            if(i==N-1)
            {
                max_len = max(max_len,len);
                cout<<"max_len:"<<max_len;
            }
            
        }
    }
int main()
{
    int a[] = {9 ,8 ,7 ,6 ,5 ,4 ,9 ,8 ,7 ,6 ,5 ,4 ,4};
    findLongestConseqSubseq(a,13);
}