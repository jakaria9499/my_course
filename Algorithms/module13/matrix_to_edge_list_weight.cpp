#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    vector<pair<int,pair<int,int>>> edgeList;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j]>0)
            {
                edgeList.push_back({i,{j,mat[i][j]}});
            }
        }
        
    }
    for(auto edge:edgeList)
    {
        cout<<edge.first<<" "<<edge.second.first<<" " <<edge.second.second<<endl;
    }
    
    

    return 0;
}
