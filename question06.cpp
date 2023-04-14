#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>stack1;
    string s="Reverse me";
    for(int i=0;i<s.size();i++)
    stack1.push(s[i]);
    while(!stack1.empty())
    {
        cout<<stack1.top();
        stack1.pop();
    }
        return 0;
}