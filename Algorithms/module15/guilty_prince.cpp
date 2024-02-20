#include <bits/stdc++.h>
using namespace std;
int n,m;
char mat[30][30];
bool vis[30][30];
int cnt;
vector<pair<int,int> > d={{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}
void dfs(int si, int sj)
{    
    cnt++;
    vis[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && mat[ci][cj]=='.')
        {
            dfs(ci,cj);
        }
    }
    
}

int main() {
    // basicIO();
    // Your cpp code here
    int t;
    cin>>t;
    while(t--)
    {    
        cnt=0;
        cin>>m>>n;
        int ai,aj;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='@')
                {
                    ai=i;
                    aj=j;
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for (int  j = 0; j < m; j++)
        //     {
        //         cout<<mat[i][j];
        //     }
        //     cout<<endl;
            
        // }
        // cout<<ai<<" "<<aj<<endl;
        memset(vis,false,sizeof(vis));
        dfs(ai,aj);
        cout<<cnt<<endl;
        
    }
    return 0;
}
