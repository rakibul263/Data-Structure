#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size_cal(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_position(Node *head, int val, int pos)
{
    Node *newNode = new Node (val);
    Node *temp = head;
    for(int i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

void print_normal(Node *head)
{
    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = c;
    c->prev = b;

    print_normal(head);

    int val, pos;
    cout<<"Enter value and positon: ";
    cin >> val >> pos;
    int size = size_cal(head);

    if (pos > size)
    {
        cout<<"Invalid Position"<<endl;
    }
    else
    {
        insert_at_position(head, val, pos);
        print_normal(head);
        print_reverse(tail);
    }
    return 0;
}
