#include<bits/stdc++.h>
using namespace std;
NGE(stack<int>s,int temp)
{
int t=s.top();
 s.pop();
 if(temp<s.top())
 {
  cout<<s.top();
  return 0;
 }
 NGE(s,s.top());
 s.push(t);
 return 0;
}
storestack()
{
    int temp=s.top();
    NGE(s,s.top());
    s.pop();
    storestack(s);
    
}
int main()
{
    int arr[4]={4,5,2,25};
    stack<int>s;
    for(int i=0;i<4;i++)
    s.push(arr[i]);
    storestack();
    NGE(s,s.top());
    return 0;
}