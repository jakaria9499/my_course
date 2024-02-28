#include<bits/stdc++.h>
using namespace std;
int n,m,c=0;
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
    c++;
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
    vector<int> re;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(!vis[i][j])
            {   
                c=0;
                dfs(i,j);
                re.push_back(c);
            }
        }  
    }
    sort(re.begin(),re.end());
    for(int x:re)
    {
        cout<<x<<" ";
    }
    if(re.size()==0) cout<<"0";

    return 0;
}
