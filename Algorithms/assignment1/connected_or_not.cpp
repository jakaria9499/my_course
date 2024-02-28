#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
int main()
{

    int n,e;
    cin>>n>>e;

    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    int q;
    cin>>q;
    while(q--)
    {   
        bool flag = false;
        int a,b;
        cin>>a>>b;

        if(find(v[a].begin(), v[a].end(), b)!=v[a].end() || a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
