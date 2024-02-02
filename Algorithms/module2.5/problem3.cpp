#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int a;
    cin>>a;
    int inc=0;
    for(int child:v[a])
    {
        inc++;
    }
    cout<<inc<<endl;
    cout<<v[a].size()<<endl;

    return 0;
}


//solved