#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, h;
    cin>>n>>h;
    ll mx = 0;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin>>x;
        mx = max(mx,x);
    }
    mx--;
    ll sum = (mx * (mx + 1)) / 2;
    h -= sum;
    
    if( h>=1) cout<< "Hablu"<<'\n';
    else cout<<"Dablu"<<'\n';
    
    return 0;
}
