#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;

    // mp.insert({"sakib", 75});
    // mp.insert({"akib", 35});
    // mp.insert({"rakib", 70});
    // mp.insert({"tamim", 28});

    // insert korar onon niyom
    mp["sakib"] = 75;
    mp["akib"] = 45;
    mp["rakib"] = 70;
    mp["samim"] = 98;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // cout << mp["akib"] << endl;
    // jodi value 0 hoi toba print korar niyom

    // if (mp["samim"])
    // {
    //     cout << "asa" << endl;
    // }
    // else
    // {
    //     cout << "nai" << endl;
    // }

    // return 0;
}
