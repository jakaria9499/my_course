#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> even;
    priority_queue<int, vector<int>, greater<int>> odd;
    int t;
    cin>>t;

    while(t--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int a;
            cin>>a;
            if(a%2==0) 
            {
                even.push(a);
                
            }
            else
            {
                odd.push(a);
            } 

        }
        if(x==2)
        {   

            if(even.size()==0) cout<<"empty"<<endl;
            else
            {
                cout<<even.top()<<endl;
                even.pop();
            }
            
        }
        if(x==3)
        {
            if(odd.size()==0) cout<<"empty"<<endl;
            else
            {
                cout<<odd.top()<<endl;
                odd.pop();
            }
        }
    }

    return 0;
}
