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
int size(Node * head)
{
    Node * tmp = head ;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
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
        input(head, tail, val);


    } 
    Node * tmp_head = head;
    Node * tmp_tail = tail;
    int sz = size(head)/2;
    bool flag = true;
    while(sz--)
    {   
        if(tmp_head->val != tmp_tail->val)
        {   
            flag = false;
            break;
        }

        tmp_head = tmp_head->next;
        tmp_tail = tmp_tail->prev;
    }
    if(flag == true)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<< endl;
    }

    return 0;
}
