#include<bits/stdc++.h>
using namespace std;

int main()
{   
    queue<string> qt;
    int q;
    cin>>q;
    while(q--)
    {   
        int x;
        cin>>x;
        if(x==0)
        {
            string s;
            cin>>s;
            qt.push(s); 
        }
        else if(x==1)
        {
            if(qt.size()>0)
            {
                cout<<qt.front()<< endl;
                qt.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }

        }
    }

    

    return 0;
}
