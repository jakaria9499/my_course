#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>> n;
    vector<long long int> a(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    
    long long int temp=0;
    for (int i = 0; i < n; i++)
    {
        temp+=a[i];
        b[i]=temp;
    }
    for (int i = n-1; i >= 0; i--)
    {
        cout<< b[i] << " ";
    }
    

    

    return 0;
}