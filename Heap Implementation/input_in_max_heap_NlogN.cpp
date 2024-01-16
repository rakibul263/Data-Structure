#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // logN
        int current_index = v.size() - 1;
        while (current_index != 0)
        {
            int parent_index = (current_index - 1) / 2;
            if (v[parent_index] < v[current_index])
                swap(v[parent_index], v[current_index]);
            else
                break;
            current_index = parent_index;
        }
    }
    for (int val : v)
        cout << val << " ";
    return 0;
}
