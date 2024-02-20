#include<bits/stdc++.h>
using namespace std;
const int N =1e1+5;
int mat[N][N];
vector<int> adj[N];
int dis[N];
bool vis[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    dis[s]=0;
    vis[s]=1;
    while(!q.empty())
    {
        int par= q.front();
        q.pop();
        // cout<<par<<" "<<dis[par]<<endl;
        for(int child:adj[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=1;
                dis[child]=dis[par]+1;
            }
        }
    }
}
int main()
{
    int n,s;
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(mat[i][j]==1)
            {
                adj[i].push_back(j);
            }
        }
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int child:adj[i])
    //     {
    //         cout<<i<<" "<<child<<endl;
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<N;i++)
    {
        dis[i]=-1;
        vis[i]=0;

    }
    bfs(s);
    for(int i=1;i<=n;i++)
    {
        cout<<dis[i]<<" ";
    }
    return 0;
}
