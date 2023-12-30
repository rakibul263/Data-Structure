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
    // new Node(10); data type er pointer return kore;
    Node *head = new Node(10);
    Node *a = new Node(20);

    //connection
    head->next = a;

    //output print
    cout<<head->value<<endl;
    cout<<head->next->value<<endl;

    return 0;
}
