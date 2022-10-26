#include<bits/stdc++.h>
using namespace std;

int mini;
void push(stack<int>& s, int a){
// first push 
if(s.size() == 0){
    mini = a;
    s.push(a);
}else{
    if(a < mini){
        s.push(2*a - mini);
        mini = a;
    }else{
        s.push(a);
    }
}
    
}

bool isFull(stack<int>& s,int n){
	return s.size() == n;
}

bool isEmpty(stack<int>& s){
    return s.empty();
}

int pop(stack<int>& s){
    if(s.size() == 0)return -1;
    int top = s.top();
    s.pop();
    if(top < mini){
        mini = 2*mini - top;
    }
    return top;
}

int getMin(stack<int>& s){
    return mini;
}