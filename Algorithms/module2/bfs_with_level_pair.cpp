#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void bfs(int src, int des)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    vis[src] = true;
    bool flag = false;
    while(!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();

        int par = p.first;
        int level = p.second;
        
        if(par==des)
        {
            cout<< level <<endl;
            flag = true;
        }
        for(int child :v[par])
        {
            if(vis[child]==false)
            {
                q.push({child,level+1});
                vis[child]=true;
            }
        }
        
    }
    if(flag==false) cout<< -1 <<endl;
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
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    bfs(src,6);
    
    return 0;
}
