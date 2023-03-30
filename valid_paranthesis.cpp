#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<int> st;
     
        for(char x:s)
        {
            if(x=='('||x=='{'||x=='[')
            {
                st.push(x);
            }
            else{
                if(st.empty()) return false;
                if(st.top()=='('&&x!=')'||st.top()=='['&&x!=']'||st.top()=='{'&&x!='}')
                {
                    return false;
                }
                st.pop();

            }
        }
        return st.empty();
       
    }
int main()
{
    return 0;
}