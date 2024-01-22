#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> l;
    int n; cin>>n;
    while(n--)
    {
        int x; cin>>x;
        l.push(x);
    }
    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        if(x==0)
        {   
            int a; cin>>a;
            l.push(a);
        }

        else if(x==2)
        {
            if(!l.empty())  l.pop();
        }
        if(!l.empty()) 
        {
            cout<<l.top()<<endl;
        }
        else cout<<"Empty"<<endl;
    }

    return 0;
}
