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
    int i=0,j=n-1,flag=0;
    while(i<n)
    {
        if(a[i]!=a[j])
        {
            flag=1;
        }
        i++;
        j--;
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    return 0 ;

}