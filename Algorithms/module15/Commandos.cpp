#include<bits/stdc++.h>
using namespace std;
vector<int> v[103];
bool vis[103];
int dis[103];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s]=1;
    dis[s]=0;
    while(!q.empty())
    {
        auto par = q.front();
        q.pop();

        for(auto child:v[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                dis[child] = dis[par]+1;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
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
        int s,d;
        cin>>s>>d;

        // memset(vis,0,sizeof(vis));
        // memset(dis,-1,sizeof(dis));
        for(int i=0;i<n;i++)
        {
            vis[i]=false;
            dis[i]=-1;
        }
        bfs(s);

        int ans=-1;
        for(int i=0;i<n;i++)
        {   
            if(d!=i)
            {
                if(dis[d]+dis[i] > ans) ans=dis[d]+dis[i];
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
        for(int i=0;i<n;i++)
        {
            v[i].clear();
        }
    }

    return 0;
}
