#include <bits/stdc++.h>
using namespace std;

int main()
{
    // add and remove the last element

    //  vector<int> x = {10, 20, 30, 40};
    // x.pop_back();//remove
    // // x.push_back(50);//add
    // for (int i = 0; i < x.size(); i++)
    // {
    //     cout << x[i] << " ";
    // }

    // x vector value is insert v vector

    //  vector<int> x = {10, 20, 30, 40};
    // vector<int> v = {1, 2, 3, 4};
    // v = x; // 0(1)v and x value is same.//different hola 0(n)hoba.

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector insert use

    // vector<int> x = {10, 20, 30, 40};
    // // value  insert in 2 number index .
    // // x.insert(x.begin() + 2, 50);

    // vector<int> v = {50, 60, 70, 80};

    // // vector insert in 2 number index.
    // x.insert(x.begin() + 2, v.begin(), v.end());

    // for (int c : x) // shortcort array
    // {
    //     cout << c << " ";
    // }

    // value erase in 3 number value
    vector<int> v = {50, 60, 70, 80, 90, 100};
    // v.erase(v.begin() + 2, v.end() - 1);
    v.erase(v.begin() + 2, v.begin() + 5);
    for (int c : v) // shortcort array
    {
        cout << c << " ";
    }
    return 0;
}