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
            if(rm[ci][cj]=='B') re= true;
            
            if(rm[ci][cj]=='.') dfs(ci,cj);
        }
    }

}
int main()
{

    int A[2],B[2];
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>rm[i][j];
            if(rm[i][j]=='A')
            {
                A[0]=i;A[1]=j;
            } 
            if(rm[i][j]=='B')
            {
                B[0]=i;B[1]=j;
            }
        }  
    }
    dfs(A[0],A[1]);
    if(re)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

    return 0;
}
