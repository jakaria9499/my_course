#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; // aivabe vector decleare korle kono size nei ne ; 
    cout<<v.size()<<endl;

    vector<int>a={10,20,30,40,50}; // aivabe vector nile kono size dite hoy ne dynamicaly size niye nei;
    cout<<a.size()<<endl;   // vector er size ber kora
    int x[6]={1,23,4,5,6,7};
    // vector<int>b(5,100);  // vector er protita index e 100 assign kora
    // vector<int>b(a);  // aketa vector theke arekta vector e copy;
    vector<int>b(x,x+6); // array theke vector e copy kora.
    for (int i = 0; i < b.size(); i++)
    {
        cout<< b[i] << " ";
    }
    
    return 0;
}