#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> v[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // for (int i = 0; i < v[0].size(); i++)
    // {
    //     cout<<v[0][i]<<" ";
    // }
    int q;
    cin>>q;
    while(q--)
    {   
        vector<int> vc;
        int x;
        cin>>x;
        for (int i = 0; i < v[x].size(); i++)
        {
            vc.push_back(v[x][i]);
        }
        if(vc.size()==0)
        {
            cout<<"-1";
        }
        sort(vc.begin(),vc.end(),greater<int>());
        for (int i = 0; i < vc.size(); i++)
        {
            cout<<vc[i]<<" ";
        }
        cout<<endl;
        

    }
    
    return 0;
}
