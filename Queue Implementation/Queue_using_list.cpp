#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int>l;
    void push(int val)
    {
       l.push_back(val);
    }
    void pop()
    {
       l.pop_front() ;
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty(); //if list is empty so  queue is empty
    }
};

int main()
{
    myQueue st;

    int n;
    cout << "Enter test case: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cout << endl
         << "Queue is: " << endl;
    while (!st.empty())
    {
        cout << st.front() << endl;
        st.pop();
    }

    return 0;
}
