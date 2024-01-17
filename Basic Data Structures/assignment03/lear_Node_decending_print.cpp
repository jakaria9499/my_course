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
vector<int> v;
void leaf_decending_print(Node * root)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) v.push_back(root->val);
    leaf_decending_print(root->left);
    leaf_decending_print(root->right);
}
int main()
{
    Node* root = input_tree();
    leaf_decending_print(root);
    sort(v.begin(),v.end());
    while(!v.empty())
    {
        cout<<v.back()<<" ";
        v.pop_back();
    }

    return 0;
}
