#include<bits/stdc++.h>
using namespace std;
const int maxN=51,maxW=1003;
int dp[maxN][maxW];
int knapsack(int n, int weight[], int items[],int W)
{
    if(n==0 || W==0) return 0;
    if(dp[n][W]!=-1) return dp[n][W];
    if(weight[n-1] <= W)
    {
        int op1 = knapsack(n-1,weight,items,W-weight[n-1])+items[n-1];
        int op2 = knapsack(n-1,weight,items,W);
        return dp[n][W]=max(op1,op2);
    }
    else return dp[n][W] = knapsack(n-1,weight,items,W);
}
int main()
{
    int n,W;
    cin>>n>>W;
    int items[n],weight[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[i]>>items[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            dp[i][j]=-1;
        }
    }
    cout<<knapsack(n,weight,items,W)<<endl;

    return 0;
}
