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
    int level,count=0;
    if(root) 
    {
        q.push({root,1});
    }
    while(!q.empty())
    {
        pair<Node*,int> p = q.front();
        Node* node = p.first;
        level = p.second;
        q.pop();
        count++;
        
        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }

    int x = pow(2,level)-1;
    cout<<"level -> "<<level<<" count -> " << count<<endl;
    cout<<"level * level -1= " <<x<<endl;
    if(x==count) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
