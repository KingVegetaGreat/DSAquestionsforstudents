#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void insert(stack<int>&s,int top){
    if(s.empty()){
        s.push(top);
        return;
    }
    if(s.top() > top){
        int oldtop = s.top();
        s.pop();
        insert(s,top);
        s.push(oldtop);
    }else{
        s.push(top);
    }
}

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   if(s.empty())return;
   int top = s.top();
   s.pop();
   sort();
   insert(s,top);
}