#include<bits/stdc++.h>
using namespace std;
class Data
{
    public:
    string nm;
    int cls;
    char s;
    int id;

};
int main()
{
    int n;
    cin >> n;
    Data a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id;
    }
    int x=0,y=n-1;
    while(x<y)
    {
        char t=a[x].s;
        a[x].s=a[y].s;
        a[y].s=t;
        x++;
        y--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].nm<< " " <<a[i].cls<< " " <<a[i].s<< " " <<a[i].id<<endl;
    }

    return 0;
}