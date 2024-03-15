#include<bits/stdc++.h>
using namespace std;
#define ll long long

class cmp
{
    public:
        bool operator()(pair<int,int> a, pair<int,int> b)
        {
            if(a.second > b.second) return true;
            else if(a.second < b.second) return false;
            else
            {
                if(a.first > b.first) return true;
                else return false;
            }
        }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    set<pair<int,int>,cmp> s;
    map<int,int> mp;
    while(t--)
    {
        int x;
        cin>>x;
        if(x==1) {
            int a;
            cin>>a;
            
            mp[a]+=1;
            s.insert({a,mp[a]});
        }
        if(x==2){
            if(s.empty()) cout<<"empty"<<'\n';
            else{

                cout<<s.begin()->first<<'\n';
                s.erase(s.begin());

            }
        }
        
    }
    
    return 0;
}
