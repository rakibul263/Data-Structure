#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

int main()
{
    Node a, b;

    //value initialize
    a.val = 10;
    b.val = 20;

    //connection
    a.next = &b;
    b.next = NULL;

    //output
    cout<<a.val<<endl;
    // cout<<a.next->val<<endl;
    cout<<(*a.next).val<<endl;

    return 0;
}
