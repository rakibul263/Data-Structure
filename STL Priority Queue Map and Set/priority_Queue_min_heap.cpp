#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>,greater<int>>pq;
    while (true)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int p;
            cin >> p;
            pq.push(p);//logN
        }
        else if (x == 1)
        {
            pq.pop();//logN
        }
        else if (x == 2)
        {
            cout << pq.top() << endl;//O(1)
        }
        else
        {
            break;
        }
    }
    return 0;
}
