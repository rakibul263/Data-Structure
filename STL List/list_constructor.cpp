#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int>mylist;
    // list<int>mylist(10);
    // list<int> mylist(10, 5); // size 10 and all value are 5
    // list<int>mylist2 = {10, 20, 30, 40};
    // list<int>mylist(mylist2);
    int a[5] = {5, 10, 15, 20, 25};
    list<int>mylist(a, a+ 5);
    // cout<<mylist.size()<<endl;


    for (auto it = mylist.begin(); it != mylist.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
