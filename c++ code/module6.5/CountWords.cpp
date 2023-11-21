#include<bits/stdc++.h>
using namespace std;

int main()
{   
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int count=0;
    while(ss>>word)
    {  
        int flag=0;
        for(char c:word)
        {
            if((c>='a'&& c<='z') || (c>='A' && c<='Z'))
            {
                flag=1;
        
            }
            
        }
        if(flag==1)
        {
            count++;
        }
    }
    cout<<count;

    return 0;
}