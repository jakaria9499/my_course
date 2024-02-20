#include<bits/stdc++.h>
using namespace std;
int n,m;
bool valid(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return false;
    return true;
}
int main()
{
    
    cin>>n>>m;
    char matrix[n][m];
    bool vis[n][m];
    vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
            vis[i][j]=false;
        }
        
    }
    // input ended;
    
    // bfs
    bool ans = false;
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[n][m]=true;
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        if(par.first==di && par.second == dj) ans = true;
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first+d[i].first;
            int cj = par.second+d[i].second;
            if(valid(ci,cj) == true && vis[ci][cj] == false)
            {
                if(matrix[ci][cj]=='.')
                {
                    q.push({ci,cj});
                    vis[ci][cj]=true;
                }
            }

        }
        

    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    

    return 0;
}
