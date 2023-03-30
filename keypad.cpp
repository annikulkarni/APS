#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf,int ind){
    // write your code here
  
    if(ind>=ques.size())
    {
        cout<<asf<<endl;
        return;
    }
    
    string x = codes[int(ques[ind]-'0')];
    for(int i=0;i<x.size();i++)
    {
        asf.push_back(x[i]);
        printKPC(ques,asf,ind+1);
        asf.pop_back();
    }
}

int main(){
    string str;
    cin >> str;
    int ind = 0;
    printKPC(str, "",ind);
}