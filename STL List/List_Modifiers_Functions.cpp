#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int>mylist = {10, 20, 30, 40};
    // list<int>newlist;
    //list copy
    // newlist = mylist;
    // newlist.assign(mylist.begin(), mylist.end());

    //push
    mylist.push_back(150);
    mylist.push_front(60);


    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}
