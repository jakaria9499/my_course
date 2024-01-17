#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node* left;
        Node * right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node * root;
    if(val==-1) root=NULL;
    else root=new Node(val);

    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {   
        Node* p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* left;
        Node * right;
        if(l==-1) left = NULL;
        else left = new Node(l);
        if(r==-1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;


        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}
int main()
{
    Node* root = input_tree();
    queue<pair<Node*,int> > q;
    int x;
    cin>>x;
    bool flag = false;
    if(root) q.push({root,0});
    while(!q.empty())
    {
        pair<Node*,int> p = q.front();
        Node* node = p.first;
        int level = p.second;
        q.pop();
        
        if(level==x)
        {
            cout<< node->val<<" ";
            flag=true;
        }


        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }
    if(flag==false) cout<<"Invalid"<<endl;
    return 0;
}
