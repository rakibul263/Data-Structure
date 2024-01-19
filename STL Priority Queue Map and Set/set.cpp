#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // complexity O(logN)
    }

    //found or not found
    if(s.count(1)) cout<<"Found";//O(logN)
    else cout<<"Not Found";
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    return 0;
}
