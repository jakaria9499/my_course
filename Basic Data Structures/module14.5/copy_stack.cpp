#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> a,b;
    int x;
    cin>>x;
    while(x--)
    {
        int val;
        cin>> val;
        a.push(val);
    }
    while(!a.empty())
    {
        b.push(a.top());
        a.pop();
    }
    while(!b.empty())
    {
        cout<<b.top()<<" ";
        b.pop();
    }


    return 0;
}
