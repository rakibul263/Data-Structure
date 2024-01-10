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

Node* input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if(val == -1) root = NULL;
    else root = new Node (val);
    queue<Node*>q;

    if(root) q.push(root);
    while(!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        Node *myleft, *myright;
        cin >> l >> r;
        if(l == -1) myleft = NULL;
        else myleft = new Node (l);
        if(r == -1) myright = NULL;
        else myright = new Node (r);

        parent->left = myleft;
        parent->right = myright;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}

int count(Node *root)
{
    if(root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;
}
int main()
{
    Node *root = input_tree();
    cout<<count(root)<<endl;
    return 0;
}
