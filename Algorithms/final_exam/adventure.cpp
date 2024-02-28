#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int dp[N][N];
int knap(int n, int weight[], int value[], int w)
{   
    if(n==0 || w==0) return 0;
    if(dp[n][w] != -1) return dp[n][w];
    if(weight[n-1] <= w)
    {
        return dp[n][w] = max(knap(n-1,weight,value,w-weight[n-1])+value[n-1], knap(n-1,weight,value,w));
    }
    else return dp[n][w] = knap(n-1,weight,value,w);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        int weight[n],value[n];
        for(int i=0;i<n;i++)
        {
            cin>>weight[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>value[i];
        }
        memset(dp,-1,sizeof(dp));
        cout<<knap(n,weight,value,w)<<endl;

    }

    return 0;
}
