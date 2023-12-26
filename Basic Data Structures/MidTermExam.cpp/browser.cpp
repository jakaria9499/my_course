#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node* next;
        Node* prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node * & head,Node * & tail, string val)
{
    Node *newNode = new Node(val);
    if(tail == NULL)
    {
        head= newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    while(true)
    {
        string v;
        cin>>v;
        if(v=="end") break;
        insert_tail(head,tail,v);
    }
    int q;
    cin>>q;
    Node * tmp = head;
    while(q--)
    {
        string ad;
        cin>>ad;

        Node * atmp = head;
        if(ad=="visit")
        {
            string vv;
            cin>>vv;
            while(atmp!=NULL)
            {
                if(vv==atmp->val)
                {
                    cout<<atmp->val<<endl;
                    tmp = atmp;
                    break;
                }


                atmp = atmp->next;
            }
            if(atmp==NULL)
            {
                cout<<"Not Available"<<endl;
            }

        }
        else if(ad=="next")
        {
            if(tmp->next!=NULL)
            {
                cout<<tmp->next->val<<endl;
                tmp = tmp->next;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(ad == "prev")
        {
            if(tmp->prev!=NULL)
            {
                cout<<tmp->prev->val<<endl;
                tmp= tmp->prev;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }

    }
    return 0 ;
}
