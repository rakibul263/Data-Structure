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

void delete_from_any_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int size_calculate(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

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

    int position;
    cout << "Enter a position: "
         << " ";
    cin >> position;

    int size = size_calculate(head);
    // cout<<size<<endl;
    if (position > size)
    {
        cout << "INVALID POSITION" << endl;
        return 0;
    }
    delete_from_any_position(head, position);
    print_linked_list(head);

    return 0;
}
