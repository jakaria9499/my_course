#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10,20,30,40,10,60,10};
    mylist.remove(10); // remove all 10 values;
    // mylist.sort() ; // for accending sort;
    // mylist.sort(greater<int>()); // for decending sort
    // mylist.sort();  mylist.unique();   // duplicate value remove ;
    // mylist.reverse();  // for reverse values;
    for(int val:mylist)
    {
        cout<< val<< endl;
    }
    
    return 0;
}
