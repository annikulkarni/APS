#include <iostream>
using namespace std;

void printStairPaths(int n, string psf,int ind){
    // write your code here
    if(ind==n)
    {
        cout<<psf<<endl;
        return;
    }
    if(ind>n)
    {
        return ;
    }
    
    psf.push_back('1');
    printStairPaths(n,psf,ind+1);
    psf.pop_back();
    psf.push_back('2');
    printStairPaths(n,psf,ind+2);
    psf.pop_back();
    psf.push_back('3');
    printStairPaths(n,psf,ind+3);
    psf.pop_back();


    
}

int main(){

    int n;
    cin >> n;
    printStairPaths(n, "",0);
}