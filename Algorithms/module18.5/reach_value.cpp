#include<bits/stdc++.h>
using namespace std;
bool reach(long long n, long long v)
{
    if(n==v) return true;
    else if(n<v) return false;
    return reach(n,v*10) || reach(n,v*20);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(reach(n,1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
