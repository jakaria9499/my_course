#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= (4*(i-1)); j++)
        {
            cout<<" ";
        }
        

        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<'\n';
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i+1; j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=(4*(n-(i+1))); j++)
        {
            cout<<" ";
        }
        

        for (int j = 1; j <= i+1; j++)
        {
            cout<<"*";
        }
        
        cout<<'\n';
    }
    
    
    return 0;
}
