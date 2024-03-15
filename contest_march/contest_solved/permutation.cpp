#include<bits/stdc++.h>
using namespace std;
const int maxN = 1e5;
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
        vector<bool> cnt(maxN );
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cnt[x]=1;
        }
        int zero =0;
        for(int i=1;i<=n;i++)
        {
            if(cnt[i]==false){
                zero++;
            }
        }
        if(k>=zero) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
