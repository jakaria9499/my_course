#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c1 = 0, c2 = 2, f=n;
    for (int i = 1; i <= n; i++)
    {
        c1++;
        cout<<c1;  
    }
    cout<<endl;
    for (int i = 1; i <= n-2; i++)
    {
        cout<<c2;
        for (int j = 1; j <= n-2; j++)
        {
            cout<<" ";
        }
        cout<<c1;
        cout<<endl;
        c2++;
    }
    if(n>1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout<<c1;
        }
    }
    

    return 0;
}
