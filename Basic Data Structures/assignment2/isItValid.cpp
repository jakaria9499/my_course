#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(Node * &head, Node * & tail, int val)
{
    Node * newNode = new Node(val);
    while(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev =tail;
    tail = newNode;
}
int size(Node * head)
{
    Node * tmp = head;
    int sz=0;
    while(tmp!=NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        Node * head = NULL;
        Node * tail = NULL;
        string s;
        cin>>s;
        int sz= s.size();
        for (int i = 0; i < sz; i++)
        {
            insert(head,tail,s[i]);

        }

        Node * tmp = head;
        
        while(true)
        {   
            if(size(head)==1) break;
            else if(tmp->val != tmp->next->val)
            {
                Node * deletetmp = tmp;
                Node * deletetmpnext = tmp->next;
                if(tmp->next->next == NULL)
                {
                    head->next = NULL;
                    tail->prev = NULL;
                    head = NULL;
                    tail = NULL;
                    delete deletetmp;
                    delete deletetmpnext;
                    break;
                }
                else if(tmp->next->next->next==NULL)
                {
                    head = tail;
                    head->next = NULL;
                    tail->prev = NULL;
                    delete deletetmp;
                    delete deletetmpnext;
                    break;
                }
                else if(tmp->next->next->next!=NULL)
                {
                    head = tmp->next->next;
                    delete deletetmp;
                    delete deletetmpnext;
                }
                tmp = tmp->next;
            }
        }

        Node * atmp  = head;
        while(atmp!=NULL)
        {
            cout<<atmp->val<<" ";
            atmp = atmp->next;
        }
        
        
    }

    return 0;
}
