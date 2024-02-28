#include<bits/stdc++.h>
using namespace std;
int mat[15][15];
int n,m;
int dp[15][15];
long long maximum_n(int i, int j)
{
    if(i==n-1 && j==m-1) return mat[i][j];
    if(i >= n || j >= m) return INT_MIN;
    if(dp[i][j]!=INT_MIN) return dp[i][j];
    
    long long op1 = maximum_n(i,j+1);
    long long op2 = maximum_n(i+1,j);
    return dp[i][j] = max(op1,op2)+mat[i][j];

}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            dp[i][j]=INT_MIN;
        }
    }

    cout<<maximum_n(0,0)<<endl;;
    return 0;
}
