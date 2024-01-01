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

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        insert_at_head(head, val);
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_at_any_position(Node *head, int val, int position)
{
    Node *newNode = new Node(val);
    if (position == 0)
    {
        insert_at_head(head, val);
        return;
    }
    Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << endl
             << "Head is not available !" << endl
             << endl;
        return;
    }
    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << "Deleted Head" << endl;
}

void delete_from_any_position(Node *head, int position)
{
    Node *temp = head;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << "Deleted"
         << " " << position << " "
         << "th position" << endl
         << endl;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl
         << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at head" << endl;
        cout << "Option 2: Insert at tail" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Delete head" << endl;
        cout << "Option 5: Delete from any position" << endl;
        cout << "Option 6: Print Linked List" << endl;
        cout << "Option 7: terminate" << endl;

        int op;
        cout << endl
             << "Enter Option: ";
        cin >> op;

        if (op == 1)
        {
            int val;
            cout << endl
                 << endl
                 << "YOU CHOOSE - Option 1: Insert at head" << endl;
            cout << "Enter a value: ";
            cin >> val;
            insert_at_head(head, val);
        }

        else if (op == 2)
        {
            int val;
            cout << endl
                 << endl
                 << "YOU CHOOSE - Option 2: Insert at tail" << endl;
            cout << "Enter a value: ";
            cin >> val;
            insert_at_tail(head, val);
        }

        else if (op == 3)
        {
            int val, position;
            cout << endl
                 << endl
                 << "YOU CHOOSE - Option 3 : Insert at any position" << endl;
            cout << "Enter a value: ";
            cin >> val;
            cout << "Enter a position: ";
            cin >> position;
            insert_at_any_position(head, val, position);
        }

        else if (op == 4)
        {
            cout << endl
                 << endl
                 << "YOU CHOOSE - Option 4 : Delete Head" << endl;
            delete_head(head);
        }

        else if (op == 5)
        {
            cout << endl
                 << endl
                 << "YOU CHOOSE - Option 4 : Delete from  position" << endl;
            int position;
            cout << "Enter delete index: ";
            cin >> position;
            delete_from_any_position(head, position);
        }

        else if (op == 6)
        {
            cout << "YOUR LINKED LIST IS: ";
            print_linked_list(head);
        }

        else if (op == 7)
        {
            break;
        }

        else
        {
            cout << "Invalid Option" << endl
                 << "Please Input currect option" << endl;
            break;
        }
    }
    return 0;
}
