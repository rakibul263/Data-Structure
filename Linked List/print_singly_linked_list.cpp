#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node *temp = head;

    // print linked list
    while (temp != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
    return 0;
}
