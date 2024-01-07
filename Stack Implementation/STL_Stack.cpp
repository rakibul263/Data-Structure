#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cout<<"Enter test case: ";
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cout<<endl<<"Stack is: "<<endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
