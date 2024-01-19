#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    // mp.insert({"sakib al hasan", 75}); // aivabe kora hoy na 
    // mp.insert({"tamim iqbal",19});
    // mp.insert({"Shamim",79});
    // mp.insert({"jakaria",50});

    mp["sakib al hasan"] = 79; 
    mp["akib"] = 100;
    mp["tamim"] = 76;
    mp["jakaria"] = 50;

    for(auto it= mp.begin(); it != mp.end(); it++)
    {
        cout<< it->first << " " << it->second<<endl;
    }
    cout<< mp["jakaria"] <<endl; //single akta key value pair print korar jonnno;

    if(mp.count("jakaria")) cout<< "ache" <<endl; // aita true false return dei
    else cout<< " nai" << endl;
    return 0;
}
