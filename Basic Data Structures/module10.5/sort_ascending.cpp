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
void input(Node * & head , Node * & tail , int val)
{
    Node * newNode = new Node(val);
    while(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void sort(Node * head)
{
    Node * tmp = head;
    
    while(tmp->next!=NULL)
    {   
        Node * stmp = tmp->next;
        while(stmp!=NULL)
        {
            if(tmp->val>stmp->val)
            {
                swap(tmp->val,stmp->val);
            }

            stmp = stmp->next;
        }


        tmp = tmp->next;
    }
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;

   while(true)
  {
    int val;
    cin>> val;
    if(val==-1) break;
    input(head,tail,val);
   } 
    sort(head);
    print(head);

    return 0;
}