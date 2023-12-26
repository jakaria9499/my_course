#include<bits/stdc++.h>
using namespace std;

int main()
{   
    // list<int> list2 = {1,2,3,4,5};
    // list<int> mylist(10,5);
    // list<int> mylist(list2);
    int a[5]={10,20,30,40,50};
    vector<int> v = { 100, 200,300};
    // list<int> mylist(a,a+5);
    list<int> mylist(v.begin(),v.end());
    for(auto it=mylist.begin(); it!=mylist.end(); it++)
    {
        cout<< * it << endl;
    }
    // for shortcut loop 
    for(int val:mylist)
    {
        cout<<val<<endl;
    }
 
    return 0;
}
