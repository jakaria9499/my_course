#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 10000000009;
ll dis[1005];
class Edge
{
    public:
    int u,v;
    ll c;
    Edge(int u, int v, ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{
    int n,e;
    cin>>n>>e;
    vector<Edge> EdgeList;
    while(e--)
    {
        int u,v;
        ll c;
        cin>>u>>v>>c;
        EdgeList.push_back(Edge(u,v,c));
    }
    for (int i = 0; i <= n; i++)
    {
        dis[i]=1e18;
    }
    int s;
    cin>>s;
    dis[s]=0;
    for (int i = 1; i <= n-1; i++)
    {
        for(Edge ed : EdgeList)
        {
            int u,v;
            ll c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if(dis[u] < 1e18 && dis[u]+c <dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for(Edge ed : EdgeList)
    {
        int u,v,c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if(dis[u] < 1e18 && dis[u]+c <dis[v])
        {
            cycle = true;
            break;
        }
    }


    if(cycle) cout<<"Negative Cycle Detected"<<endl;
    else
    {
        int t;
        cin>>t;
        while(t--)
        {
            int d;
            cin>>d;
            if(dis[d]<1e18) cout<< dis[d]<<endl;
            else cout<<"Not Possible"<<endl;
        }
    }
    return 0;
}




// 4 4
// 0 2 5 
// 0 3 12
// 2 1 2 
// 1 3 3

// 4 4
// 1 3 -3
// 0 3 5 
// 2 1 1 
// 0 2 -2