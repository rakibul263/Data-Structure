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

void insert_at_tail(Node *&head, int n)
{
    Node *newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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
    Node *head = new Node(30);
    Node *a = new Node(50);
    Node *b = new Node(60);
    
    //connection
    head->next = a;
    a->next = b;
    

    int tail_node;
    cin >> tail_node;
    insert_at_tail(head, tail_node);
    print_linked_list(head);

    return 0;
}
