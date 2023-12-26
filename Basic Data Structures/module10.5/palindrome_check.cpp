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

    return 0;
}
