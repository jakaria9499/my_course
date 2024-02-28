#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int dp[N];
bool reach(int des, int s)
{
    if(des==s) return 1;
    if(des<s) return 0;
    if(dp[s] != -1) return dp[s];
    return dp[s] = reach(des,s+3) || reach(des,s*2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(dp,-1,sizeof(dp));
        if(reach(n,1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
