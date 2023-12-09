#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream a(s);
    string wo;
    int flag=0;
    while(a >> wo)
    {
        if(wo=="Jessica")
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


    return 0;
}