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
        char a='a';
        int c=0;
        for(char x:s)
        {
            if(x!=a) 
            {
                c++;
                a=x;
            }
            
        }
        cout<<--c<<'\n';
    }

    return 0;
}
