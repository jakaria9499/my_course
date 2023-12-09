#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int re = n%2, od=0, ev=0, div=n/2;
        for (int j = 0; j < n; j++)
        {
            if(re==0)
            {
                if(a[j]%2==0)
                {
                    ev++;
                }
                else
                {
                    od++;
                }
            }
            else
            {
                cout << "-1" << endl;
                break;
            }
        }

        if(od==0 && ev==0)
        {
            
        }
        else if(od>ev)
        {
            cout << od-div<<endl;
        }
        else if(od<ev)
        {
            cout << ev-div << endl;
        }
        else
        {
            cout << "0" << endl;
        }

        
        
        
    }
    

    return 0;
}