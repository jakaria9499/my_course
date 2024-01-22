#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin,s);
        string word;
        stringstream ss(s);
        map<string,int> mp;
        int mx =0;
        string a;
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word]>mx)
            {
                mx = mp[word];
                a = word;
            }
        } 
        cout<<a<<" "<<mx<<endl;
    }
    return 0;
}
