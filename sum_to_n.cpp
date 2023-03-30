#include<iostream>
using namespace std;
int sum_to_n(int i,int sum)
{
    if(i<0)
    {
        cout<<sum<<endl;
        return 0;
    }
    sum_to_n(i-1,sum+i);
}
int main()
{
   sum_to_n(10,0);
}