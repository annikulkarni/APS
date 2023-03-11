#include<iostream>
using namespace std;
int print(int count,int n)
{
    if(count==n)
    {
        return 0;
    }
    cout<<"ANI"<<endl;
    
    return print(count+1,n);
}
int main()
{
    print(0,100);
    return 0;
}