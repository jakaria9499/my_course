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
int link_list_size(Node * head)   //linked list size 
{
    Node * tmp = head;
    int size=0;
    while(tmp!=NULL)
    {   
        tmp= tmp->next;
        size++;
    }
    return size;
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
    int size = link_list_size(head);
    cout<< "size of the linked list is : "<< size << endl;
    return 0;
}
