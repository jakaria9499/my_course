#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool ans=0;
    for (int i = 0; i < s.size(); i++)
    {
        int cnt=0;
        if(s[i]=='0')
        {
            while(s[i]=='0' && i<s.size())
            {
                cnt++;
                i++;
            }
        }
        else
        {
            while(s[i]=='1' && i<s.size())
            {
                cnt++;
                i++;
            }
        }
        if(cnt>=7) ans=1;
        i--;
    }
    if(ans) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    

    return 0;
}

//https://codeforces.com/problemset/problem/96/A
