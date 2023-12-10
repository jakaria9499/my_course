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
void insert_at_tail(Node * &head, int v)  //insert tail link list
{
    Node* newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        return; 
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newNode;
 
}
// void duplicate_value_cheak(Node * &head)   //aita swap er jonno bebohar korcilam
// {
//     Node * tmp = head;
//     while(tmp->next!=NULL)             //accending order e sort korar function;
//     {   
//         Node * stmp=tmp->next;
//         while(stmp!=NULL)
//         {   
//             // cout<<tmp->val<<" ";
//             // cout<<stmp->val<<endl;
//             if(tmp->val>stmp->val)
//             {
//                 swap(tmp->val,stmp->val);
//             }
//             stmp= stmp->next;
//         }

//         tmp=tmp->next;
        
//     }
// }
void duplicate_value_cheak(Node * &head)
{   
    int num[10]={0};
    Node * tmp = head;
    while(tmp!=NULL)
    {   
        for (int i = 0; i < 10; i++)
        {
            if(tmp->val==i)
            {
                num[i]++;
            }
        }


        tmp=tmp->next;
        
    }
    bool result=false;
    for (int i = 0; i < 10; i++)
    {
        if(num[i]>1)
        {
            result=true;
        }

    }
    if(result==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}

void print_linked_list(Node *head)   // print lisked list
{   
    cout<<endl<<"Linked list : ";
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl<<endl<<endl<<endl;
}
int main()
{
    int val;
    Node * head = NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
    duplicate_value_cheak(head);

    return 0;
}
