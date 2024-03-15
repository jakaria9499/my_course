#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int a[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        a[int(s[i])-97]++;
    }
    for(int i=0;i<sizeof(a)/4;i++)
    {
        if(a[i]>0) cout<< char(i+97)<<" : "<<a[i]<<endl; 
    }


    return 0;
}
