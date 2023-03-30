#include<iostream>
using namespace std;
long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
          long long cnt=0;

        for(long long i=0;i<N-1;i++)
        {
            for(long long j=i+1;j<N;j++)
            {
                if(arr[i]>arr[j]&&i<j)
                {
                    cnt++;
                }
            }


        }
        return cnt;
    }
int main()
{
    long long arr[5]={2, 4, 1, 3, 5};
    cout<<inversionCount(arr,5);
}
