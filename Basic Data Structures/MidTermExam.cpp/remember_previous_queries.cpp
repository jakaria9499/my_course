#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int q;
    cin>>q;
    list<int> alist;
    while(q--)
    {

        int x,v;
        cin>>x>>v;
        if(x==0)
        {
            alist.push_front(v);
        }
        else if(x==1)
        {
            alist.push_back(v);
        }
        else if(x==2)
        {
            if(v<alist.size())
            {
                alist.erase(next(alist.begin(),v));
            }
        }
        cout<<"L -> ";
        for(int val:alist)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        alist.reverse();
        cout<<"R -> ";
        for(int val:alist)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        alist.reverse();
        // cout<<"size - "<<alist.size()<<endl;
    }


    

    return 0;
}
