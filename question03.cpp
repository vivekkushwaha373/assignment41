#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    for(int i=0;i<5;i++)
    s.push(i+1);
    cout<<"size="<<s.size()<<endl;
    
    while(s.empty()==0)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}