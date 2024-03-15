#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
            
        }
        for (int i = n-2; i >= k; i--)
        {
            int x = v[i];
            v.erase(v.begin()+i);
            v.push_back(x);
        }
        // v.erase(v.begin()+3);
        for (int i = 0; i < n; i++)
        {
            cout<<v[i]<<" ";
        }

        
        
    }

    return 0;
}
