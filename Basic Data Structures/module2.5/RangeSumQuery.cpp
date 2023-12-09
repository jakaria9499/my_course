#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int n,q;
    // cin>> n >> q;
    // int ar[n];
    // for (int  i = 0; i < n; i++)
    // {
    //     cin>>ar[i];
    // }
    // while(q--)
    // {
    //     int l,r;
    //     cin>>l>>r;
    //     l--;
    //     r--;
    //     int sum=0;
    //     for (int i = l; i <= r; i++)
    //     {
    //         sum+=ar[i];
    //     }
    //     cout<< sum << endl;
        

    // }

    long long int n,q;
    cin>> n >> q;
    int ar[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>ar[i];
    }
    long long sum[n];
    long long t=0;
    for (int i = 0; i < n; i++)
    {
        t+=ar[i];
        sum[i]=t;
    }

    // int sum[n];
    // sum[0]=ar[0];
    // for (int i = 1; i < n; i++)     // pritron theke dekhano
    // {
    //     sum[i]=ar[i]+sum[i-1];
    // }
    



    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        long long total=0;
        // cout<< l << r << endl;
        // cout<< sum[r]<< " - " << sum[l] << endl;
        if(l>0)
        {
            total=sum[r]-sum[l-1];
        }
        else
        {
            total=sum[r];
        }

        cout<< total << endl;
        

    }
    
    

    return 0 ;

}