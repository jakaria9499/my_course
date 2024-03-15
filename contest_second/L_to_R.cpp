#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll pre[n];
    pre[0]=1;
    for(int i=1;i<n;i++)
    {
        pre[i]=a[i]*pre[i-1];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        l--; r--;
        // ll mul=1;

        // for (int i = l; i < r; i++)
        // {
        //     mul*=a[i];
        // }
        // cout<<mul<<"\n";
        long long sum;
        if(l==0) sum=pre[r];
        else sum=pre[r]-pre[l-1];
        cout<<sum<<endl;
        
    }
    
    return 0;
}
