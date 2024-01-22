#include<bits/stdc++.h>
using namespace std;
class Pairs
{
    public:
        string s;
        int i;
    Pairs(string s, int i)
    {
        this->s = s;
        this->i = i;
    }
};
class cmp
{
    public:
        bool operator()(Pairs a, Pairs b)
        {
            if(a.s < b.s) return true;
            else if(a.s > b.s) return false;
            else
            {
                if(a.i > b.i) return true;
                else return false;
            }
        }
};
int main()
{
    int n; cin>>n;
    list<Pairs>l;
    while(n--)
    {
        string s;
        int i;
        cin>>s>>i;
        Pairs obj(s,i);
        l.push_back(obj);
    }
    l.sort(cmp());
    while(!l.empty())
    {
        cout<<l.front().s << " " << l.front().i<<endl;
        l.pop_front();
    }
    return 0;
}
