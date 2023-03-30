#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
    stack<int> s;
    stack<int> min_s;
    
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        
        if (min_s.empty() || val <= min_s.top()) {
            min_s.push(val);
        }
    }
    
    void pop() {
        if (s.top() == min_s.top()) {
            min_s.pop();
        }
        s.pop();
    }
    
    int top() {
        if (s.empty()) {
            return -1;
        }
        return s.top();
    }
    
    int getMin() {
        if (min_s.empty()) {
            return -1;
        }
        return min_s.top();
    }
};

int main()
{
    return 0;
}