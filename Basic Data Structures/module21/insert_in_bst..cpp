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
    cin>> val;
    Node * root;
    if(val == -1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * p = q.front();
        q.pop();



        int l,r;
        cin>>l>>r;
        Node* left;
        Node * right;
        if(l==-1) left=NULL;
        else left=new Node(l);

        if(r==-1) right = NULL;
        else right = new Node(r);

        p->left = left;
        p->right = right;



        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);

    }
    return root;
}
void level_order(Node * root)
{   
    if(root == NULL)
    {
        cout<< "Tree nai" <<endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        //ber kore ana
        Node * f = q.front();
        q.pop();

        // shob kaj aikhane 
        cout<<f->val<<" ";


        //tar childern gola rakhi
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);

    }
}
void insert(Node * &root,int x)
{   
    if(root==NULL)
    {
        root= new Node(x);
        return;
    }
    if(root->val>x)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else 
        {
            insert(root->left,x);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else 
        {
            insert(root->right,x);
        }
    }
}
int main()
{
    Node * root = input_tree();
    // level_order(root);
    int x; cin>>x;
    insert(root,x);
    level_order(root);

    return 0;
}




//input 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
// 20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1 
