#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void input(Node * & head , Node *&tail, int val)
{
    Node * newNode = new Node(val);
    if(head==NULL)
    {
        head= newNode;
        tail = newNode;
        return;
    }
    tail->next= newNode;
    tail=newNode;
}
int size(Node * head)
{
    Node * tmp = head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp= tmp->next;
    }
    return count;
}
void print(Node * head)
{
    Node * tmp = head;
    int mid = size(head)/2;
    if(mid%2==0)
    {
        while(mid--)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<endl;
    }
    else
    {   
        for(int i=1;i<mid;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        input(head,tail,val);

    }
    print(head);

    return 0;
}
