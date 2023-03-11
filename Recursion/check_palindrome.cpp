#include<iostream>
using namespace std;
bool check_palindrome(string s,int i, int n)
{
    if(i>=n/2)
    {
        cout<<s[i]<<" t "<<s[n-i-1];
        return true;
    }
    if(s[i]!=s[n-i-1])
    {
        cout<<s[i]<<" f " <<s[n-i-1];
        return false;
    }
    return check_palindrome(s,i+1,n);
    
}
int main()
{
   check_palindrome("madam tusadam",0,13);
}