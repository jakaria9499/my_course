#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
vector<int> lb;
void bfs(int l)
{   
    int src=0;
    queue<int> q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        if(level[p]==l)
        {
            lb.push_back(p);
        }

        for(int child:v[p])
        {
            if(!vis[child])
            {
                q.push(child);
                level[child]=level[p]+1;
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
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int l;
    cin>>l;
    bfs(l);
    sort(lb.begin(),lb.end(),greater<int>());
    for(int ele:lb)
    {
        cout<<ele<<" ";
    }
    return 0;
}

//solved;
