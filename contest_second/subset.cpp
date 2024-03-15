#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        ll sum1=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        ll x = (sum1/2)-d;
        int c=0;
        for (int i = 0; i < n; i++)
        {
            ll sum2 =0;
            if(a[i]<x) sum2+=a[i];
            for (int j = 0; j < n; j++)
            {
                if(i!=j)
                {
                    
                    if(sum2==x) c++;

                    else if(a[j]<x) sum2+=a[j];                    
                }
            }
            
        }
        cout<<c<<endl;
        

        
    }

    return 0;
}
