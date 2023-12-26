#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
    public:
    Node * head = NULL;
    Node * tail = NULL;
    int sz = 0 ;
    void push(int val)
    {   
        sz++;
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node * deleteNode = tail;
        tail = tail->prev;
        if(tail==NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;

    }
    int top()
    {
        return tail->val;
    } 
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};
class myQueue
{
    public:
    Node* head = NULL;
    Node * tail = NULL;
    int sz = 0;
    void push(int val)
    {   
        sz++;
        Node * newNode = new Node(val);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

    }
    void pop()
    {   
        sz--;
        Node * deleteNode = head;
        head = head->next;
        if(head==NULL)
        {
            tail=NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;

    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};
int main()
{
    myStack a;
    myQueue b;
    int n,m;
    cin>>n>>m;
    while(n--)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    while(m--)
    {
        int x;
        cin>>x;
        b.push(x);
    }
    bool flag = true;
    if(a.size()==b.size())
    {
        while(!a.empty())
        {   
            if(a.top()!=b.front())
            {
                flag=false;
                break;
            }
            b.pop();
            a.pop();
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
