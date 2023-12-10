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
        cout<<endl<<"Inserted at tail"<<endl<<endl;
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
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl<<endl<<endl<<endl;
}
void insert_at_positin(Node* head,int pos, int v)
{
    Node* newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i < pos-1; i++)
    {
        tmp= tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted at position "<<pos<<endl<<endl;
}
void insert_at_head(Node * &head,int v)
{
    Node * newNode = new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted at head "<<endl;

}
void delete_from_position(Node * head,int pos)
{   
    Node * temp=head;
    for (int i = 1; i < pos-1; i++)
    {
        temp=temp->next;
    }
    Node * deleteElement= temp->next;
    temp->next=temp->next->next;
    delete deleteElement;
    
}
void delete_from_head(Node * &head)
{
    Node * temp = head;
    head= temp->next;
    delete temp;
}
int main()
{
    Node* head=NULL;
    while(true)
    {

        cout<<endl<<endl;
        cout<<"1: Insert at Tail"<<endl;
        cout<<"2: Print Linked list"<<endl;
        cout<<"3: Insert at any position "<<endl;
        cout<<"4: Insert at head"<<endl;
        cout<<"5: Delete from position"<<endl;
        cout<<"6: Delete head"<<endl;
        cout<<"7: Terminate the program "<<endl;
        int op;
        cin>> op;
        if(op==1)
        {   
            cout<<"Please enter value : ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,v;
            cout<<"Enter position : ";
            cin>>pos;
            cout<<"Enter value : ";
            cin>>v;
            if(pos==0)
            {
                insert_at_head(head,v); 
            }
            else
            {
                insert_at_positin(head,pos,v);
            }
            
        }
        else if(op==4)
        {   
            int v;
            cout<<"Enter head value: ";
            cin>>v;
            insert_at_head(head,v);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter any Position"<< endl;
            cin>>pos;
            if(pos==0)
            {
                delete_from_head(head);
            }
            else
            {
                delete_from_position(head,pos);
            }
            
        } 
        else if(op==6)
        {
            delete_from_head(head);
        }
        else if(op==7)
        {
            break;
        }
        cout<<"done"<<endl;
    }
    return 0;
}
