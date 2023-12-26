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
int size(Node * head)
{
    Node * tmp = head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert(Node * & head, Node * & tail, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int cheak_list(Node * head1, Node * head2)
{
    Node * tmp1 = head1;
    Node * tmp2 = head2;
    bool flag = 1;
    while(tmp1!=NULL)
    {
        if(tmp1->val!=tmp2->val)
        {
            flag=0;
            
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }  
    return flag;
}
void print(Node * head)
{
    Node * tmp = head;
    while(tmp!=NULL)
    {   
        cout<< tmp->val << " ";
        tmp=tmp->next;
    }
    cout<< endl;

}
int main()
{
    Node * head1 = NULL;
    Node * head2 = NULL;
    Node * tail1 = NULL;
    Node * tail2 = NULL;
    while(true)
    {
        int val;
        cin>> val;
        if(val==-1) break;
        insert(head1,tail1,val);

    }
    print(head1);
    while(true)
    {
        int val;
        cin>> val;
        if(val==-1) break;
        insert(head2,tail2,val);
    }
    print(head2);
    if(size(head1)==size(head2))
    {
        if(cheak_list(head1,head2)==1)
        {
            cout<<"YES"<< endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    else
    {
        cout<<"NO"<< endl;
    }


    return 0;
}
