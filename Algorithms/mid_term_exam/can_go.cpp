#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 10000000009;
vector<pair<int,ll>> v[1005];
ll dis[1005];
class cmp
{
    public:
        bool operator()(pair<int,ll> a, pair<int,ll> b)
        {
            return a.second > b.second;
        }
};
void dijkstra(int src)
{
    priority_queue<pair<int,ll>,vector<pair<int,ll>>,cmp> pq;
    pq.push({src,0});
    dis[src]=0; 
    while(!pq.empty())
    {
        pair<int,ll> parent = pq.top();
        pq.pop();
        int node = parent.first;
        ll cost = parent.second;
        for(pair<int,ll> child: v[node])
        {
            int childNode = child.first;
            ll childCost = child.second;
            if(cost + childCost<dis[childNode])
            {
                dis[childNode]= cost + childCost;
                pq.push({childNode,dis[childNode]});
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        ll c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
    }
    for (int i = 0; i <= n; i++)
    {
        dis[i]=1e18;
    }
    int s,t;
    cin>>s>>t;
    dijkstra(s);
    while(t--)
    {
        int d;
        ll w;
        cin>>d>>w;
        if(dis[d]<=w) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
