#include<bits/stdc++.h>
using namespace std;
// void decrease_array(vector<int> &a,int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         a[i]--;
//     }
    
// }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,H;
    cin>>n>>H;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int k=0,i=n-1;
    while(H>=0 && a[i]>=0)
    {
        k++;
        a[i]-=1;
        H-=a[i];
    
    }
    if(H<1) cout<<"Dablu"<<endl;
    else if(a[i]-k <=H) cout<<"Hablu"<<endl;
    

    

    return 0;
}
