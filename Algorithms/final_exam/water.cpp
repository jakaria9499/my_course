#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.first > b.first;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++)
        {
            int h; cin>>h;
            a.push_back({h,i});
        }
        sort(a.begin(),a.end(),cmp);
        if(a[0].second < a[1].second)
        {
            cout<<a[0].second << " "<<a[1].second<<endl;
        }
        else
        {
            cout<<a[1].second<<" "<<a[0].second<<endl;
        }

    }

    return 0;
}
