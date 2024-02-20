#include<bits/stdc++.h>
using namespace std;
const int N = 100006;
vector<int> adj[N];
bool vis[N];
int level[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s]=1;
    level[s]=0;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int child:adj[p])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=1;
                level[child]=level[p]+1;
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
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 0; i < N; i++)
    {
        vis[i]=0;
        level[i]=INT_MAX;
    }
    
    int x,y,k;
    cin>>x>>y>>k;
    bfs(x);
    int kk = k*2;
    // cout<<level[k] << kk<<endl;
    if(kk>=level[y]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}


