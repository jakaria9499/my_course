#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int par[N];
int group_size[N];
int level[N];
void dsu_initialize(int n)
{
    for(int i=1;i<=n;i++)
    {
        par[i]=-1;
        group_size[i]=1;
        level[i]=0;
    }

}
int dsu_find(int node)
{
    if(par[node]==-1) return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA=dsu_find(node1);
    int leaderB=dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB])
    {
        par[leaderB] =leaderA;
        group_size[leaderA]+= group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
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
    for(int i=0;i<e;i++)
    {
        long long int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    sort(edgeList.begin(),edgeList.end(),cmp);
    long long int cost=0;
    for(Edge ed:edgeList)
    {
        int lA = dsu_find(ed.u);
        int lB = dsu_find(ed.v);
        if(lA != lB)
        {
            dsu_union_by_size(ed.u,ed.v);
            cost+=ed.w;
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
    if(flag) cout<<"Not Possible";
    else  cout<<e-(n-1)<<" "<<cost<<endl;
    

    return 0;
}
