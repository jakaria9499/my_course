#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> a(n);
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i]; 
    }
    
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0) ans = max(ans,a[i]);
        for (int j = 0; j < n; j++)
        {
            if(i!=j){
                int sum = a[i]+a[j];
                if(sum%2 ==0){
                    ans = max(ans,sum);
                }
            }
        }
        
    }
    cout<<ans<<'\n';
    
    return 0;
}
