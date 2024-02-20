#include<bits/stdc++.h>
using namespace std;
const int N = 101;
int n,m;
bool vis[N][N];
int dis[N][N];
int a[N][N];
bool ans;
vector<pair<int,int>> d = {{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2}};
bool valid(int i, int j)
{
    if(i<0 ||i>=n || j<0 || j>=m) return false;
    return true;
}
void bfs(int si,int sj, int di, int dj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        if(par.first==di && par.second == dj)
        {   
            cout<<dis[par.first][par.second]<<endl;
            ans = true;
        }
        for (int i = 0; i < 8; i++)
        {
            int ci= par.first+d[i].first;
            int cj= par.second+d[i].second;
            if(valid(ci,cj)==true && vis[ci][cj]==false)
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                dis[ci][cj]=dis[par.first][par.second]+1;
            }
        }

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int si,sj,di,dj;
        cin>>n>>m>>si>>sj>>di>>dj;
        ans = false;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                vis[i][j]=false;
                dis[i][j]=-1;
            }
        }
        bfs(si,sj,di,dj);
        if(!ans) cout<<"-1"<<endl;
    }
    return 0;
}
