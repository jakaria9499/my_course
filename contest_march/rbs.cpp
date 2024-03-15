#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='(') a++;
            else if(s[i]==')') b++;
        }
        if(a==b) cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
        
        
    }

    return 0;
}
