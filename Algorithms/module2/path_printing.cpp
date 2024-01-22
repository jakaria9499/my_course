#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
int par[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();

        cout<<p<<endl;
        // for (int i = 0; i < v[p].size(); i++)
        // {
        //     int child = v[p][i];
        //     cout<<child<<endl;
        // }
        for(int child :v[p])
        {
            if(vis[child]==false)
            {
                q.push(child);
                vis[child]=true;
                level[child]=level[p]+1;
                par[child] = p;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src,des;
    cin>>src>>des;
    memset(vis,false,sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(par,-1,sizeof(par));
    bfs(src);
    int x = des;
    vector<int> path;
    while(x!=-1)
    {
        path.push_back(x);
        x = par[x];
    }
    reverse(path.begin(),path.end());
    for(int val:path)
    {
        cout<<val<<" ";
    }
    
    return 0;
}
