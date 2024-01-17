#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert({"Sakib all Hasan", 75});
    mp.insert({"tamim", 59});
    mp.insert({"shuvo", 100});
    mp.insert({"Hasan", 34});

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
   
    return 0;
}
