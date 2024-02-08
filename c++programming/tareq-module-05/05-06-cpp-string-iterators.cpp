#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "Hello World";

    // for (int i = 0; i < str.size(); i++)
    // {
    //     cout << str[i] << endl;
    // }

    // cout << *str.begin() << endl;
    // cout << *(str.end() - 1) << endl;

    /*
       string::iterator it;

      for (it = str.begin(); it < str.end(); it++)
      {
          cout << *it << endl;
      }

      */

    for (auto it = str.begin(); it < str.end(); it++) // auto is a keyword in  > c++ 11
    {
        cout << *it << endl;
    }

    return 0;
}
