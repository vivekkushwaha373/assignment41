#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    for(int i=0;i<5;i++)
    s.push(i+1);
    
    cout<<s.top();
    return 0;
}