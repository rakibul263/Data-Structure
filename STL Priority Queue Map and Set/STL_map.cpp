#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    // mp.insert({"Sakib all Hasan", 75});
    // mp.insert({"tamim", 59});
    // mp.insert({"shuvo", 100});
    // mp.insert({"Hasan", 34});

    // another way insert value
    mp["sakib all hasan"] = 75;
    mp["tamim"] = 59;
    mp["shuvo"] = 100;
    mp["hasan"] = 34;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    // cout << mp["Hasan"] << endl;

    // found
    if (mp.count("shuvo"))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "NOT Found" << endl;
    }
    return 0;
}
