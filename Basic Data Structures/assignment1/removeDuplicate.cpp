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
void input(Node * &head, Node * & tail, int val)
{
    Node * newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next= newNode;
    tail = newNode;

}
void print(Node * head)
{
    Node * tmp= head;
    while(tmp!=NULL)
    {
        if(tmp->val!=-2)
        {
            cout<<tmp->val<< " ";
        }
        tmp= tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    while(true)
    {
        int val;
        cin>> val;
        if(val==-1) break;
        input(head,tail, val);
    } 

    for (Node* i = head; i->next!=NULL; i=i->next)
    {   
        for (Node* j = i->next; j!=NULL; j=j->next)
        {
            if(i->val!=-2)
            {
                if(i->val==j->val)
                {
                    j->val=-2;
                }
            }
    
        }
        
    }

    
print(head);
    return 0;
}
