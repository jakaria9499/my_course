#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int sp1=0,a=1,sp2=(n*2)-3,b=1,x=1;
    for (int i = 1; i < n*2; i++)
    {
        if(i<n)
        {
            
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < a; j++)
            {
                cout<<x;
            }
            for (int j = 0; j < sp2; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < b; j++)
            {
                cout<<x;
            }
            sp1++;
            sp2=sp2-2;
            cout<<endl;
            
        }
        else if(i==n)
        {   
            for (int j = 0; j < n-1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < 1; j++)
            {
                cout<< x;
            }
            cout<<endl;

        }
        else if(i==n+1)
        {   
            sp1=n-2;
            a=1;
            sp2=1;
            b=1;
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < b; j++)
            {
                cout<<x;
            }

            for (int j = 0; j < sp2; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < a; j++)
            {
                cout<<x;
            }
            cout<<endl;

        }
        else
        {   
            sp1--;
            sp2=sp2+2;
            for (int j = 0; j < sp1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < b; j++)
            {
                cout<<x;
            }
            for (int j = 0; j < sp2; j++)
            {
                cout<<" ";
            }

            for (int j = 0; j < a; j++)
            {
                cout<<x;
            }

            cout<<endl;
        }
        if(x<2) x++;
        else x=0;
        
    }
    
    return 0;
}




