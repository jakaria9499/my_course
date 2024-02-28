#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int dp[N][N];
bool exam(int n , int a[], int m)
{   
    if(m==0) return 1;
    if(n==0) return 0;

    if(dp[n][m] != -1) return dp[n][m];
    if(a[n-1] <= m)
    {
        return dp[n][m] = exam(n-1,a,m-a[n-1]) || exam(n-1,a,m);
    }
    else return dp[n][m] = exam(n-1,a,m);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        memset(dp,-1,sizeof(dp));
        int x = 1000-m;
        if(exam(n,a,x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
