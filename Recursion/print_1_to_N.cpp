#include<iostream>
using namespace std;
int one_to_n(int count)
{
    if(count==100)
    {
        return 0;
    }
    cout<<count<<endl;
    count++;
    one_to_n(count);
}

int main()
{
    one_to_n(0);
}