#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> a,b;
    stack<int> c;

    int x;
    cin>>x;
    while(x--)
    {
        int y;
        cin>>y;
        a.push(y);
    }
    while(!a.empty())
    {
        c.push(a.front());
        a.pop();
    }
    while(!c.empty())
    {
        b.push(c.top());
        c.pop();
    }
    while(!b.empty())
    {
        cout<<b.front()<<" ";
        b.pop();
    }


    return 0;
}
