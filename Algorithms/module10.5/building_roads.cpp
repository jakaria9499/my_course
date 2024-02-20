#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> v[N];
bool vis[N];
int last;
void bfs(int si)
{
    queue<int> q;
    q.push(si);
    vis[si]=true;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        last=p;
        for(int child:v[p])
        {
            if(!vis[child])
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
    int cnt =0;
    vector<pair<int,int>> x;
    memset(vis,false,sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {   
            cnt++;
            if(cnt>1)
            {
                x.push_back({last,i});  
            }
            bfs(i);

        }
    }
    cout<<--cnt<<endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i].first<<" "<<x[i].second<<endl;
    }
    
    

    return 0;
}
