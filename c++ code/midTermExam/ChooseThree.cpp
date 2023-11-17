#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,s,flag=0;
        cin>>n>>s;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        
        for (int j = 0; j < n-2; j++)
        {
            for (int k = j+1; k < n-1; k++)
            {
                for (int m = k+1; m < n; m++)
                {
                    if((a[j]+a[k]+a[m])==s){
                        flag=1;
                    }
                    else{
                        
                        
                    }
                }
                
            }
            
        }
        if(flag==1){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }

    
}