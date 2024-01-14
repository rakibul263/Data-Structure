#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        f->left = myleft;
        f->right = myright;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}

void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->value)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}

void level_order(Node *root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout<<f->value<<" ";

        if(f->left) q.push(f->left);//f->left means f->left != NULL
        if(f->right) q.push(f->right);//f->right means f->right != NULL
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin>>x;
    insert(root, x);
    level_order(root);

    return 0;
}
