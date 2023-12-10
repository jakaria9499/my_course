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

void insert_at_tail(Node * &head, int v)  //insert tail link list
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
void print_linked_list(Node *head)   // print lisked list
{   

    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl;

}
void insert_at_positin(Node* head,int pos, int v)
{
    Node* newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < pos-1; i++)
    {
        
        if(tmp==NULL)
        {
            cout<<endl<<"Invalid Index"<<endl<<endl;
            tmp= tmp->next;
            return;
        }
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    print_linked_list(head);
}
void insert_at_head(Node * &head,int v)
{
    Node * newNode = new Node(v);
    newNode->next=head;
    head=newNode;

}
int main()
{   
    int val;
    Node * head = NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
    int t;
    cin>>t;
    while(t--)
    {   
        int index,val;
        cin>>index>>val;
        if(index==0)
        {
            cout<<"Invalid"<<endl;
        
        }
        else if(index==1)
        {
            insert_at_head(head,val);
        }
        else
        {
            insert_at_positin(head,index,val);
        }

    }
    

    return 0;
}
