#include<bits/stdc++.h>
using namespace std;

//return the address of the string
char* reverse(char *s, int len)
{
   stack<char>st;
   for(int i = 0;i<len;i++){
       st.push(s[i]);
   }
   int i = 0;
   while(!st.empty()){
       char t = st.top();
       st.pop();
       s[i++] = t;
   }
   return s;
}