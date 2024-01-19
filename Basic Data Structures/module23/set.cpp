#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x); //O(logN)
    }
     // mainly set er internal kono revarse function nai
     // set duplicate value rakhe na
    if(s.count(10)) cout<<"YES" << endl;
    else cout<< " NO " << endl;

    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<< *it <<endl;
    }

    return 0;
}
