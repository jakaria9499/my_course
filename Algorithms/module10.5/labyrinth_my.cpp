#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N = 1001;
char mat[N][N];
bool vis[N][N];
pair<int,int> parT[N][N];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j)
{
    return i>=0 && i<n && j>=0 && j<m;
}
void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    parT[si][sj]={-1,-1};
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();

        // cout<< par.first << " - "<<par.second<<endl;
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first+d[i].first;
            int cj = par.second+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj] && mat[ci][cj]!='#')
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                parT[ci][cj]={par.first, par.second};
            }
        }
        
    }

}
int main()
{
    cin>>n>>m;
    pair<int,int> a,b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
            vis[i][j]=false;
            if(mat[i][j]=='A') a = {i,j};
            if(mat[i][j]=='B') b = {i,j};
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j]=='A')
            {
                bfs(i,j);

            }
        }
        
    }
    if(vis[b.first][b.second]) 
    {   
        cout<<"YES"<<endl;
        stack<pair<int,int>> st;
        queue<pair<int,int>> q;
        q.push({b.first,b.second});
        while(!q.empty())
        {
            st.push({q.front().first,q.front().second});
            auto x = q.front();
            q.pop();
            if(parT[x.first][x.second].first!=-1 && parT[x.first][x.second].second != -1)
            {
                q.push({parT[x.first][x.second].first, parT[x.first][x.second].second});
            }
        }
        
        pair<int,int> s = {a.first,a.second};
        st.pop();
        cout<<st.size()<<endl;
        while(!st.empty())
        {   
            if(s.first<st.top().first && s.second == st.top().second) cout<<"D";
            else if(s.first>st.top().first && s.second == st.top().second) cout<<"U";
            else if(s.first==st.top().first && s.second < st.top().second) cout<<"R";
            else if(s.first==st.top().first && s.second > st.top().second) cout<<"L";
            s.first=st.top().first;
            s.second = st.top().second;
            st.pop();
        }


    }
    else cout<<"NO"<<endl;
    // cout<<parT[b.first][b.second].first << " " << parT[b.first][b.second].second <<endl;
    
    
    return 0;
}
