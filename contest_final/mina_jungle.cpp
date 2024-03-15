#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 1001;
bool vis[N][N];
int   mat[N][N];
int di,dj;
vector<pair<int,int>> d = {{-1,-1},{-1,+1},{+1,-1},{+1,+1}};
bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}
int dfs(int si, int sj)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int si,sj;
        for (int i = 1; i < N; i++)
        {
            for (int j = 1; j < m; j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]==-1)
                {
                    si=i;
                    sj=j;
                }
                if(mat[i][j]==-2)
                {
                    di=i;
                    dj=j;
                }
            }
            
        }
        memset(vis,0,sizeof(vis));
        dfs(si,sj);
        
    }


    return 0;
}

