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
void input(Node * & head , Node * & tail, int val)
{
    Node * newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail=newNode;
}
void maximum(Node * &head)
{
    Node * tmp1 = head;
    while(tmp1->next!=NULL)
    {
        Node* tmp2= tmp1->next;
        while(tmp2!=NULL)
        {
            if(tmp1->val>tmp2->val)
            {
                swap(tmp1->val,tmp2->val);
                // cout<< tmp1->val<< " "<<tmp2->val<<endl;
            }
            tmp2= tmp2->next;
        }

        tmp1= tmp1->next;
    } 
}
void print(Node * head)
{
    Node * tmp= head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl;
}
int main()
{   
    Node* head = NULL;
    Node * tail = NULL;

    
    while(true)
    {   
        int val;
        cin >> val;
        if(val==-1) break;
        input(head, tail,val);
    }
    maximum(head);
    print(head);
    cout<<"tail value : "<<tail->val<<endl;

    return 0;
}
