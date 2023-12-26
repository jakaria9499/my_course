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
void print(Node * head)
{
    Node * tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<< " ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert(Node * &head, Node *& tail, int x, int val)
{
    Node *newNode = new Node(val);
    Node * tmp = head;
    if(size(head)==0)
    {
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            print(head);
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    else if(size(head)>0)
    {
        if(size(head)-1==x)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            print(head);
        }
        else if(x+1>size(head))
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            for (int i = 1; i < x; i++)
            {
                tmp = tmp->next;
            }
            newNode->next = tmp->next;
            tmp->next = newNode;
            newNode->next->prev = newNode;
            newNode->prev = tmp;
            print(head);
            
        }
    }


}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    int q;
    cin>> q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
        insert(head,tail,x,v);
        // print(head);
    }

    return 0;
}
