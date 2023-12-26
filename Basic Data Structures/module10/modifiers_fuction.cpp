#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = { 10,20 ,30,40};
    list<int> newList = { 100, 200, 300, 400};
    vector<int> v = { 10 , 20 , 30 , 40 , 50};
    // list<int> newlist;
    // newlist = myllist; // for shorcut copy
    // newlist.assign(myllist.begin(), myllist.end()); // for longcut copy
    // myllist.push_back(100); // last e insert kore 
    // myllist.push_front(50);  // first e insert kore
    // myllist.pop_back();   // last e delete kore
    // myllist.pop_front();    // first e delete kore
    // myllist.insert(next(myllist.begin(),2),100); // for insert any specific position
    // myllist.insert(next(myllist.begin(),2), {100,200,300});  // for insert multipul value at any specific position
    // myllist.insert(next(myllist.begin(),2), newList.begin(), newList.end());  // for insert from another list  at any specific position
    // myllist.erase(next(myllist.begin(),2)); // for delete any specific position
    // myllist.insert(next(myllist.begin(), 3), v.begin(), v.end() );  // vector to list insert and array to list insert are same
    // mylist.erase(next(mylist.begin(),1), next(mylist.begin(),3));  // for delete multipul values;
    //replace(mylist.begin(),mylist.end(),10,100);  //for replace any value
    // for(int val:mylist)
    // {
    //     cout<<val << " "; 
    // }

    auto it = find(mylist.begin(),mylist.end(), 40);   // for fine any value
    if(it== mylist.end())
    {
        cout<< "Not found"<< endl;
    }
    else
    {
        cout<< "Found"<< endl;
    }

    return 0;
}
