#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(2*n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        b.push_back(a[i]);
    }
    for(int val:b)
    {
        cout<< val << " ";
    }
    return 0;
}