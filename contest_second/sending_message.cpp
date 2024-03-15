#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    while(cin>>a>>b)
    {

        int j=0, i=0;
        while(i<a.size() && j<b.size())
        {
            if(a[i]==b[j])
            {
                i++;j++;
                // cout<<a[i]<<" "<<b[j]<<" ";
            }
            else
            {
                // cout<<a[i]<<" "<<b[j]<<" ";
                i++;
            }
        }
        
        if(j<b.size()) cout<<"Impossible"<<"\n";
        else cout<<"Possible"<<"\n";

    }



    return 0;
}
