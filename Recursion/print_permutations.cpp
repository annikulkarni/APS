#include <iostream>
using namespace std;

void printPermutations(string str,int ind){
    // write your code here
    if(ind==str.size())
    {
        cout<<str<<endl;
        return;
    }

    for(int i=ind;i<str.size();i++)
    {
        swap(str[ind],str[i]);
        printPermutations(str,ind+1);
        swap(str[ind],str[i]);
    }

}

int main(){
    string str;
    cin>>str;
    printPermutations(str,0);
    
}