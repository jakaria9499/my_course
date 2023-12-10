#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        
    }
    bool flag=false; 
    sort(a.begin(),a.end());
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            flag=true;
            break;
        }
        
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<< "NO"<< endl;
    }
    

    


    return 0;
}