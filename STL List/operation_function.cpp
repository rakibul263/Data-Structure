#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>mylist = {10, 20, 30, 40, 10, 10 ,10};
    // mylist.remove(10);
    mylist.sort();
    // mylist.sort(greater<int>());
    mylist.unique();

    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}
