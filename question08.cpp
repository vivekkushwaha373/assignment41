#include<bits/stdc++.h>
using namespace std;
fill_stack(stack<int>&s1,int temp)
{
    if(s1.empty()||temp>s1.top())
    {s1.push(temp);
    return 0;
    }
    else
    {
        int t=s1.top();
        s1.pop();
        fill_stack(s1,temp);
        s1.push(t);
        return 0;
    }
}
sortstack(stack<int>&s1)
{
if(s1.empty())
{
    return 0;
}
int temp=s1.top();
s1.pop();
sortstack(s1);
fill_stack(s1,temp);
}
int main()
{
stack<int>x;
x.push(2);
x.push(10);
x.push(5);
x.push(15);
x.push(45);
sortstack(x);
while(x.empty()==0)
{
cout<<x.top()<<" ";
x.pop();

}
    return 0;
}