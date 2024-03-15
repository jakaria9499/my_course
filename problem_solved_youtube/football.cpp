#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<s.size();i++)
    {
        int cnt=0;
        if(s[i]=='0')
        {
            cnt++;
            while(s[i+1]=='0')
            {
                cnt++;
                i++;
            }
        }
        else
        {
            cnt++;
            while(s[i+1]=='1')
            {
                cnt++;
                i++;
            }
        }
        if(cnt>=7) flag=true;
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    return 0;
}
