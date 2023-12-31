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

void insert_at_any_position(Node *&head, int val, int position)
{
    Node *newNode = new Node(val);
    // conner case
    if (position == 0)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int size_calculate(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void print_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;

    // insert at any position;
    int val, position;
    cout << "Enter a value and position: ";
    cin >> val >> position;

    int size = size_calculate(head);
    // conner case
    if (position > size)
    {
        cout << "Invalid Position" << endl;
        return 0;
    }

    // function call
    insert_at_any_position(head, val, position);
    print_linked_list(head);

    return 0;
}
