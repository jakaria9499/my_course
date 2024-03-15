#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,d;
        cin>>a>>b>>d;
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            ll mn = min(a,b),mx = max(a,b);
            if(mn*(d+1) >= mx) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}

//https://codeforces.com/contest/1519/problem/A
