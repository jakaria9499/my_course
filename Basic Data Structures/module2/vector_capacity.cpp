#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> v;
    //  cout<< v.size() << endl; // vector er size ke  return kore ;

    //  cout<<v.max_size() << endl; // vector er max size ke return kore;

    cout << v.capacity()<< endl; // vector er capacity ke return kore . 
                                // capacity dynamicaly 2X kore increase kore .
    
    v.push_back(10);
    // v.clear();   // clear shodhu size ke clear kore dei. normally use kora jay na , kinto jore kore use kora jay
    // cout<<v.capacity() << endl;
    // cout<<v[0]<<endl; 
    cout<<v.size() <<endl;

    v.resize(2); // resize shodhu size ke baray.  abong komay 
    v.resize(4,10); // aita baki new faka index kola te 10 assign kore dei; 


    return 0;
}