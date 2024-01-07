#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    int n;
    cout << "Enter test case: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    cout << endl
         << "Queue is: " << endl;
    while (!q.empty())
    {
        cout <<q.front() << endl;
        q.pop();
    }
    return 0;
}
