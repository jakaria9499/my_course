 #include<bits/stdc++.h>
using namespace std;
const int N = 1005;

int dp[N][N];
bool cho(int n, int a[], int x)
{
    if(n==0) return 0;
    if(x==0) return 1;
    if(dp[n][x] != -1) return dp[n][x];
    if(a[n-1] <= x)
    {
        return dp[n][x] = cho(n-1,a,x-a[n-1]) || cho(n-1,a,x);
    }
    else return dp[n][x] = cho(n-1,a,x);
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int total =0;
        for(int i=0;i<n;i++)
        {
            total += a[i];
        }
        if(total%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {   
            memset(dp,-1,sizeof(dp));
            int x = total/2;
            if(cho(n,a,x)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;


            
        }

        
    }

    return 0;
}
