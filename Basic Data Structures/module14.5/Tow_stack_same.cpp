#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int> v;
    void push(int val){ v.push_back(val);}
    void pop(){v.pop_back();}
    int top(){ return v.back();}
    int size(){ return v.size();}
    bool empty()
    {
        if(v.size()==0) return true;
        else return false;
    }
};

int main()
{   
    myStack a,b;
    int x=0,y=0;
    cin>>x;
    while(x--)
    {
        int m;
        cin>>m;
        a.push(m);
    }
    cin>>y;
    while(y--)
    {
        int n;
        cin>>n;
        b.push(n);
    }
    bool flag = true;
    if(a.size()==b.size())
    {
        int sz = a.size();
        while(sz--)
        {
            if(a.top()!=b.top())
            {
                flag=false;
                break;
            }
            a.pop();
            b.pop();
        }
    }
    else
    {
        flag=false;
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
