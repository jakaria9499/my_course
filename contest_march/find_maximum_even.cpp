#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());

    
    int sum1=0,sum2=0,inc=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0) 
        {
            sum1+=a[i];
            inc++;
            if(inc==2) break;

        }
    }
    inc=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==1) 
        {
            sum2+=a[i];
            inc++;
            if(inc==2) break;

        }
    }
    int ans=max(sum1,sum2);
    if(ans%2==0) cout<<ans<<endl;
    else cout<<min(sum1,sum2)<<endl;
    

    return 0;
}
