#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=a[i];
        }
        ll divide = sum/2;
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        ll sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(sum2+a[i]<divide) sum2+=a[i];
            if(sum2+a[i]>=divide) break;

        }
        if(sum2==divide) cout<<"0"<<endl;
        else if(sum2<divide) cout<<divide-sum2<<endl;
        else cout<<sum2-divide<<endl;
        
    }

    return 0;
}
