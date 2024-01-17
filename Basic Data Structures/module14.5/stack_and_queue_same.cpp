#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0) return true;
        else return false;
    }

};
class myQueue
{
    public:
    list<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_front();
    }
    int front()
    {
        return v.front();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0) return true;
        else return false;
    }
};

int main()
{
    
    int t,q;
    myQueue b;
    myStack a;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        b.push(x);
    }
    bool flag = true;
    if(a.size()==b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            if(a.top()!=b.front())
            {
                flag = false;
                break;
        
            }
            a.pop();
            b.pop();
        }
    }
    else
    {
        flag = false;
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
