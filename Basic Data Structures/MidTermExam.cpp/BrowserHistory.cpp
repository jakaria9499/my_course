#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    list<string> mylist;
    list<string> addre;
    stringstream ss(a);
    string word;
    while(ss>>word)
    {
        mylist.push_back(word);
    }
    mylist.pop_back();
    // for(string val:mylist)
    // {
    //     cout<<val << " ";
    // }
    auto it = find(mylist.begin(),mylist.end(),mylist.front());
    int q;
    cin>>q; 
    cin.ignore();
    for(int i=0; i<q; i++)
    {
        string b;
        getline(cin,b);
        stringstream ff(b);
        string wd;
        while(ff>>wd)
        {
            addre.push_back(wd);
        }

        if(addre.front()=="visit")
        {
            it = find(mylist.begin(),mylist.end(), addre.back());
            
            if(it== mylist.end())
            {
                cout<< "Not Available"<< endl;
            }
            else
            {
                cout<<*it<<endl;

            }
        }
        else if(addre.front()=="next")
        {
            cout<<*it++<<endl;
        }
        else if( addre.front()=="prev")
        {
            cout<<*it--<<endl;
        }


            // cout<< addre.front() << endl;
            // cout<< addre.back()<< endl;
        // cout<< * next(address.begin(),1) << endl;

        // auto it = find(mylist.begin(),mylist.end(), "jakaria");
        // if(it== mylist.end())
        // {
        //     cout<< "Not found"<< endl;
        // }
        // else
        // {
        //     cout<< "Found"<< endl;
        // }
    }

    return 0;
}
