#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int n,m;
char mat[N][N];
bool vis[N][N];
pair<int,int> parT[N][N];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j)
{
    if(i<0 ||i>=n || j<0 || j>=m) return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    parT[si][sj]={-1,-1};
    while(!q.empty())
    {
        auto par= q.front();
        q.pop();
        // cout<<par.first<<" "<<par.second<<" p ";
        // cout<<parent[par.first][par.second].first<<" ";
        // cout<<parent[par.first][par.second].second<<endl;
        for(int i=0;i<4;i++)
        {
            int ci=par.first+d[i].first;
            int cj=par.second+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && mat[ci][cj]!='#')
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                parT[ci][cj]={par.first,par.second};
            }
        }
    }
}

int main()
{   
    cin>>n>>m;
    pair<int,int> s,d;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            vis[i][j]=0;
            if(mat[i][j]=='R') 
            {
                s.first=i;
                s.second=j;
            }
            if(mat[i][j]=='D')
            {
                d.first=i;
                d.second=j;
            }
        }
    }
    bfs(s.first,s.second);
    if(vis[d.first][d.second])
    {
        queue<pair<int,int>> q;
        queue<pair<int,int>> st;
        q.push({d.first,d.second});
        while(!q.empty())
        {
            st.push({q.front().first,q.front().second});
            auto x=q.front();
            q.pop();
            if(parT[x.first][x.second].first!=-1 && parT[x.first][x.second].second!=-1)
            {
                q.push({parT[x.first][x.second].first, parT[x.first][x.second].second});
            }
            
        }

        while(!st.empty())
        {
            if(mat[st.front().first][st.front().second]=='.')
            {
                mat[st.front().first][st.front().second]='X';
            }
            st.pop();
        }

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
        
    }
    
    

    return 0;
}
