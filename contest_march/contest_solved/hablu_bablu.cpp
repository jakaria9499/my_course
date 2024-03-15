#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h;
    cin>>n>>h;
    int max_value = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(max_value<x) max_value = x;
    }
    bool flag=false;
    for (int i = max_value-1; i >=1 ; i--)
    {   
        h=h-i;
        if(h<1){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"Dablu"<<'\n';
    else  cout<<"Hablu"<<'\n';
    return 0;
}
