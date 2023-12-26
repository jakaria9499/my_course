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
void print(Node *head)  
{   
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl;
}

void input_tail(Node * &head, int v) 
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newNode;
}


void input_head(Node * &head,int v)
{
    Node * newNode = new Node(v);
    newNode->next=head;
    head=newNode;

}
void delete_any(Node * &head,int v)
{   
    if(head == NULL)
    {
        return; 
    }
    if(v==0)
    {
        Node * temp = head;
        head= temp->next;
        delete temp;
        return;
    }
    Node * temp=head;
    for (int i = 0; i < v-1; i++)
    {
    
        if(temp==NULL || temp->next ==NULL)
        {
            return;
        }
        temp=temp->next;
    }
    if(temp->next==NULL)
    {
        return;
    }
    Node * deleteElement= temp->next;
    temp->next=temp->next->next;
    delete deleteElement;
}
int main()
{
    Node* head=NULL;
    int t;
    cin>> t;
    while(t--)
    {
        int x,v;
        cin>> x>> v;
        if(x==0)
        {
            input_head(head,v);    
        }
        else if(x==1)
        {
            input_tail(head,v);
        }
        else if(x==2)
        {   
            delete_any(head,v);
        }
        print(head);

    }
    return 0;
}
