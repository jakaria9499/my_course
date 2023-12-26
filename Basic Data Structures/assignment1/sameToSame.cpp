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


int size(Node * head)
{
    Node * tmp = head;
    int count=0;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        count++;
    }
    return count;
}
int main()
{
    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    while(true)
    {
        int val;
        cin>> val;
        if(val==-1) break;
        input(head1,tail1, val);
    }  
    while(true)
    {
        int val;
        cin>> val;
        if(val==-1) break;
        input(head2,tail2, val);
        
    }
    Node * tmp1 = head1;
    Node * tmp2 = head2;
    bool flag= true;
    if(size(head1)==size(head2))
    {
        while(tmp1!=NULL && tmp2!=NULL)
        {
            if(tmp1->val!=tmp2->val)
            {
                flag=false;
                break;
            }
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
    }
    else
    {
        flag=false;
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



    

    return 0;
}
