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
    // mylist.push_back(150);
    // mylist.push_front(60);
    
    //pop
    // mylist.pop_back();
    // mylist.pop_front();

    // mylist.insert(next(mylist.begin(), 2), 100);
    // mylist.erase(next(mylist.begin(), 2));

    // for(int val : mylist)
    // {
    //     cout<<val<<" ";
    // }

    auto it = find(mylist.begin(), mylist.end(), 30);
    if(it == mylist.end())
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found";
    }

    return 0;
}
