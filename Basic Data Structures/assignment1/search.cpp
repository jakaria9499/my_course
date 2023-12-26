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
int found_value(Node * head, int x)
{
    Node * tmp = head;
    int index=0;
    while(tmp!=NULL)
    {
        if(tmp->val==x)
        {

            return index;
            break;
        }
        else
        {
            index++;
        }
        tmp=tmp->next;

    }
    return -1;

    
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {   
        Node * head = NULL;
        Node * tail = NULL;
        while(true)
        {   
            int v;
            cin>> v;
            if(v==-1) break;
            input(head,tail, v);
        }
        int x;
        cin>>x;
        cout<< found_value(head,x)<< endl;
        
    }  

    

    return 0;
}
