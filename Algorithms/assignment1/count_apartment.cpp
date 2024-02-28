#include<bits/stdc++.h>
using namespace std;
int n,m;
char rm[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j)
{
    if(i<0 ||i>=n || j<0 || j>=m) return false;
    return true;
}
bool re = false;
void dfs(int si, int sj)
{
    vis[si][sj]=true; 
    for (int i = 0; i < 4; i++)
    {   
        int ci= si+d[i].first;
        int cj= sj+d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj]==false)
        {
            if(rm[ci][cj]=='.') dfs(ci,cj);
        }
    }

}
int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>rm[i][j];
            if(rm[i][j]=='#') vis[i][j]=true;
        }  
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j])
            {
                dfs(i,j);
                c++;
            }
        }  
    }
    cout<<c<<endl;
    

    return 0;
}
