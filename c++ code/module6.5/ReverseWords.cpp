#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st ;
    getline(cin,st);
    stringstream a(st),b(st);
    string word1,word2;
    int space=0;
    while(a>>word1)
    {
        space++;
    }

    while(b>>word2)
    {
        for(int i=word2.size()-1; i>=0; i--)
        {
            cout << word2[i] ;
        }
        if(space>1)
        {
            cout<<" ";
            space--;
        }
        
    }

    return 0;
}