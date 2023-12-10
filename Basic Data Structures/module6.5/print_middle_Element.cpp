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
    cout<<endl<<"Linked list : ";
    Node*tmp=head;
    int size=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        size++;
    }
    tmp=head;
    int a= size/2,inc=0;;
    if(size%2==1)
    {
        while(tmp!=NULL)
        {

            if(inc==a)
            {
                cout<<tmp->val<<" ";
            }
            inc++;
            tmp= tmp->next;
        }
    }
    else
    {
        while(tmp!=NULL)
        {

            if(inc==a-1)
            {
                cout<<tmp->val<<" "<<tmp->next->val;

            }
            inc++;
            tmp= tmp->next;
        }
    }
    
    cout<<endl<<endl<<endl<<endl;
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
    print_linked_list(head);

    return 0;
}
