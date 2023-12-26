#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int n,m;
    stack<int> a;
    queue<int> b;
    cin>>n>>m;
    while(n--)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    while(m--)
    {
        int x;
        cin>>x;
        b.push(x);
    }
    bool flag=true;
    if(a.size()==b.size())
    {
        while (!a.empty())
        {   
            if(a.top()!=b.front())
            {
                flag=false;
                break;
            }
            a.pop();
            b.pop();
        }
        
    }
    else
    {
        flag=false;
    }
    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}
