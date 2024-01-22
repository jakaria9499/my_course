#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

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
    int src;
    cin>>src;
    memset(vis,false,sizeof(vis));
    bfs(src);

    return 0;
}
