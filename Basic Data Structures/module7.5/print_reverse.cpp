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
void input_list(Node * &head,Node * &tail, int val)
{
    Node * newNode = new Node(val);
    while(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_reverse(Node * head)
{   
    Node*tmp = head;
    if(tmp==NULL) return;

    print_reverse(tmp->next);
    cout<<tmp->val<<" ";
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while(true)
    {
        cin>> val;
        if(val==-1) break;
        input_list(head,tail,val);

    }  
    print_reverse(head);

    return 0;
}
