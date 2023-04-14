#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>s;
    // for(int i=0;i<5;i++)
    s.push("I");
    s.push("love");
    s.push("to");
    s.push("code");
   
    
    while(s.empty()==0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}