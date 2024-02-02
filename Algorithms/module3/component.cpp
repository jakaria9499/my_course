#include<bits/stdc++.h>
using namespace std;
const int n = 1e5+5;
vector<int> v[n];
bool vis[n];
void dfs(int src)
{
    cout<<src<<endl;
    vis[src] = true;

    for(int child:v[src])
    {
        if(!vis[child])
        {
            dfs(child);
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
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            c++;
        }
    }
    cout<<"component -"<<c <<endl;


    return 0;
}
