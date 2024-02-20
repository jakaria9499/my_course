void dfs(int si, int sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true; 
    for (int i = 0; i < 4; i++)
    {
        int ci= si+d[i].first;
        int cj= sj+d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj]==false)
        {
            dfs(ci,cj);
        }
    }
}