#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int parent[N];
int group_size[N];
void dsu_initialize(int n)
{
    for(int i=1;i<=n;i++)
    {
        parent[i]=-1;
        group_size[i]=1;
    }
}
int dsu_find(int node)
{
    if(parent[node]==-1) return node;
    parent[node] = dsu_find(parent[node]);
    return parent[node];
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB]=leaderA;
        group_size[leaderA]+=group_size[leaderB];
    }
    else
    {
        parent[leaderA]=leaderB;
        group_size[leaderB]+=group_size[leaderA];

    }
}
class Edge
{
    public:
        long long int u,v,w;
        Edge(long long int u, long long int v, long long int w)
        {
            this->u = u;
            this->v = v;
            this->w = w;
        }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while(e--)
    {
        long long int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    long long int Cost = 0;
    for(Edge ed: edgeList)
    {   
        int leaderA = dsu_find(ed.u);
        int leaderB = dsu_find(ed.v);
        if(leaderA != leaderB)
        {
            dsu_union_by_size(ed.u,ed.v);
            Cost+=ed.w;
        }
    }
    bool flag=false;
    for(int i=1;i<=n;i++)
    {
        if(dsu_find(1)!=dsu_find(i))
        {
            flag=true;
        }
    }
    if(flag) cout<<"-1"<<endl;
    else cout<<Cost<<endl;
    return 0;
}