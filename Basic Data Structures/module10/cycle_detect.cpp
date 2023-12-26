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

int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;

    Node * slow = head;
    Node * fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast= fast->next->next;
        if(fast==slow)
        {
            cout<< "Cycle detected "<<endl;
            break;
        }
    }

    
    return 0;
}
