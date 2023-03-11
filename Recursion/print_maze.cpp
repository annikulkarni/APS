#include <iostream>
using namespace std;

void printMazePaths(int sr, int sc, int dr, int dc, string psf){
    // write your code here
    if(sr==dr&&sc==dc)
    {
        cout<<psf;
        cout<<endl;
        return;
    }
    if(sr>dr||sc>dc)
    {
        return;
    }
    psf.push_back('h');
    printMazePaths(sr,sc+1,dr,dc,psf);
    psf.pop_back();
    psf.push_back('v');
    printMazePaths(sr+1,sc,dr,dc,psf);
    psf.pop_back();
    
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    printMazePaths(0, 0, n - 1, m - 1, "");
}