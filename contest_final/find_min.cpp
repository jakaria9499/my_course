#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    set<int> s;
    while(t--)
    {
        int x;
        cin>>x;
        if(x==1) {
            int a;
            cin>>a;
            s.insert(a);
        }
        if(x==2){
            if(s.empty()) cout<<"empty"<<'\n';
            else{

                cout<<*s.begin()<<'\n';
                s.erase(s.begin());

            }
        }
    }
    
    return 0;
}
