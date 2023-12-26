#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10,20,30};
    mylist.clear();
    mylist.resize(2);
    mylist.resize(5,100);
    cout<< mylist.size();
    // cout<< mylist.max_size();


    for(int val : mylist)
    {
        cout<< val << endl;
    }

    return 0;
}
