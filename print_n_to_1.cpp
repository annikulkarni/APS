#include<iostream>
using namespace std;
int N_to_one(int i,int count)
{
    if(i>count)
    {
        return 0;
    }
    
    N_to_one(i+1,count);
    cout<<i<<endl;
}
int main()
{
   N_to_one(1,100);
}