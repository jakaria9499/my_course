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
int main()
{
    Node * root = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);
    Node * f = new Node(70);
    Node * g = new Node(80);
    Node * h = new Node(90);
    Node * i = new Node(100);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    h->right = i;
    d->left = f;
    d->right = g;

    level_order(root);

    return 0;
}
