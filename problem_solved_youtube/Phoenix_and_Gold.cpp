#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v;
        int sum =0;
        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            v.push_back(a);
            sum+=a;
        }
        if(sum==x) cout<<"NO"<<'\n';
        else{
            cout<<"YES"<<'\n';
            int cnt =0;
            int ans=0;
            while(cnt!=n)
            {
                int a = v.front();
                v.erase(v.begin());
                if(a+ans==x)
                {
                    v.push_back(a);
                }
                else
                {
                    cout<<a<<" ";
                    cnt++;
                    ans+=a;
                }
            }
            cout<<'\n';
        }
        
    }

    return 0;
}

// https://codeforces.com/contest/1515/problem/A
