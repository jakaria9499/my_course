#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        stack<int> a;
        stack<int> b;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1')
            {
              a.push(1);
            }
            else
            {
              b.push(0);
            }
        }

        while(!a.empty() && !b.empty())
        {
          a.pop();
          b.pop();
        }
        if(a.empty() && b.empty())
        {
          cout<<"YES"<<endl;
        }
        else
        {
          cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
