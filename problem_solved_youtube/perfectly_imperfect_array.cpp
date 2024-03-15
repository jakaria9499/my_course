#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool ans = false;
        int a;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            int s = sqrt(a);
            if(s*s != a) ans = true;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        
    }

    return 0;
}
//https://codeforces.com/contest/1514/problem/A