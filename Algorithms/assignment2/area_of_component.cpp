#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
char mat[N][N];
bool vis[N][N];
int n,m,c;
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j)
{
    if(i<0 ||i>=n || j<0 || j>=m) return false;
    return true;
}
void dfs(int si, int sj)
{
    c++;
    vis[si][sj]=true; 
    for (int i = 0; i < 4; i++)
    {
        int ci= si+d[i].first;
        int cj= sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && mat[ci][cj]=='.')
        {
            dfs(ci,cj);
        }
    }
}
int main()
{

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
            vis[i][j]=false;
        }
    }
    vector<int> com;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] && mat[i][j]=='.' )
            {   
                c=0;
                dfs(i,j);
                com.push_back(c);
            }
        }
    }
    sort(com.begin(),com.end());
    if(com.size()>0) cout<< com[0]<<endl;
    else cout<< "-1"<<endl;
    return 0;
}
