#include<bits/stdc++.h>
using namespace std;
const int N = 50;
char mat[N][N];
bool vis[N][N];
int dis[N][N];
int n;
vector<pair<int,int> > d;
bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<n;
}
void bfs(int si, int sj)
{
    queue<pair<int,int> > q;
    q.push({si,sj});
    vis[si][sj]=1;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pair<int,int> parent = q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            int ci = parent.first+d[i].first;
            int cj = parent.second+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && mat[ci][cj]!='T')
            {
                q.push({ci,cj});
                vis[ci][cj]=1;
                dis[ci][cj]=dis[parent.first][parent.second]+1;
            }
        }
    }
}
int main()
{
    d.push_back({0,1});
    d.push_back({0,-1});
    d.push_back({1,0});
    d.push_back({-1,0});
    while(cin>>n)
    {
        pair<int,int> des,src;
        for(int i=0; i<n; i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>mat[i][j];
                vis[i][j]=0;
                dis[i][j]=-1;
                if(mat[i][j]=='E') 
                {
                    des.first = i;
                    des.second = j;
                }
                if(mat[i][j]=='S')
                {
                    src.first =i;
                    src.second = j;
                }
            }
        }
        bfs(src.first,src.second);

        cout<<dis[des.first][des.second]<<endl;
    }


    return 0;
}
