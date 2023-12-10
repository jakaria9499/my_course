#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)   // O(n);
    {
        cin>>a[i];
    }
    int l=0,r=n-1,x;            /// total time complexity O(N);
    cin>>x;
    bool flag=false;

    while(l<=r)     // O(logN);
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
            flag= true;
            break;
        }
        if(x>a[mid])
        {
            // dane dike

            l=mid+1;
        }
        else
        {
            //bam dike
            r=mid-1;

        }

    }

    if(flag==true) cout<<"YES"<< endl;
    else cout<< "NO"<< endl;



    return 0;
}