#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sp1=n-1,st=n,sp2=0;
    for (int i = 1; i < (n*2); i++)
    {
        if(i<=n)
        {
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            
            for (int j = 0; j < st; j++)
            {
                cout<<"*";
            }
            for (int j = 0; j < sp2; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < st; j++)
            {
                cout<<"*";
            }
            cout<<endl;
            st--;
            sp2=sp2+4;
            sp1--;
        }
        if(i==n || i==n+1)
        {
            st++;
            sp2=sp2-4;
            sp1++;
        }

        if(i>n)
        {
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            
            for (int j = 0; j < st; j++)
            {
                cout<<"*";
            }
            for (int j = 0; j < sp2; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < st; j++)
            {
                cout<<"*";
            }
            cout<<endl;
            st++;
            sp2=sp2-4;
            sp1++;
        }
    }
    

    return 0;
}
