#include<bits/stdc++.h>
using namespace std;

int main() 
{ 

    vector<vector<int> > adj[]={{{1, 1}, {2, 6}}, {{2, 3}, {0, 1}}, {{1, 3}, {0, 6}}, {{1, 3}, {0, 6}}};
    // cout<<sizeof(adj)<<endl;

    //     cout<<sizeof(adj)<<"*"<<adj[0].size()<<"*"<<adj[0][0].size();
        for(int i=0;i<sizeof(adj)/12;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                for(int k=0;k<adj[i][j].size();k++)
                {
                    cout<<adj[i][j][k]<<" ";
                }
            }
        }
 
    return 0; 
}

