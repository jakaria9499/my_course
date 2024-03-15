#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,k;
        cin>>n>>k;
        int a[n];
        int c=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]<=n) c++;
        }
        if((n-c)<=k) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }

    return 0;
}
