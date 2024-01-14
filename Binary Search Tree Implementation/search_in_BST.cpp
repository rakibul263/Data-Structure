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

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->value == x)
        return true;
    if (x < root->value)
    {
        // bool l = search(root->left, x);
        // if(l==true) return true;
        // else return false;
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    if(search(root,60))
    {
        cout<<"Yes! Found"<<endl;
    }
    else 
        cout<<"Not Found"<<endl;

    return 0;
}
