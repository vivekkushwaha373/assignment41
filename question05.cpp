#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>stack1;
    stack<int>stack2;
    for(int i=0;i<5;i++)
    {stack1.push(i+1);
    stack2.push(stack1.top());}
    while(stack2.empty()==0)
    {
     cout<<stack2.top()<<" ";
     stack2.pop();
    }
    return 0;
}