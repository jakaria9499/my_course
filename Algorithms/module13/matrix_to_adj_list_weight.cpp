#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    vector<pair<int,int>> v[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mat[i][j]>0)
            {
                v[i].push_back({j,mat[i][j]});
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {   
        for(auto child:v[i])
        {
            cout<<i<<" "<<child.first<<" -> "<<child.second<<endl;
        }
    }
    
    

    return 0;
}
