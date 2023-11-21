#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int size ,fac=0;
        cin>>size;
        int ar[size];
        for (int j = 1; j <= size; j++)
        {
            cin>>ar[j];
            fac+=j;
        }
        fac = fac-size;
        int ab[fac],count=0;
        for (int j = 0; j < size-1; j++)
        {
            for (int k = j+1; k < size; k++)
            {   
                cout<<ar[j]<<" + "<<ar[k]<<" + "<<k-j<<endl;
                ab[count]=(ar[j]+ar[k])+(k-j);
                count++;
                // cout<<j<<k<<" ";
            }
            
        }

        sort(ab, ab + count);
        for (int j = 0; j < count; j++)
        {
            cout<<ab[j]<<" ";
        }
        

        // cout<<ab[0]<< " " << fac <<endl;
        
        

    }
    

    return 0;
}