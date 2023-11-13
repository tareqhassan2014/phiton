#include <bits/stdc++.h>
using namespace std;

// function diya variable create
int *fun()
{
    int *p = new int;
    *p = 30;
    return p;
}

int main()

{
    int *x = fun();
    cout << *x;
    // Dynamic variable create..
    // int *n = new int;
    // *n = 10;

    // // cout << n;//addres print korba.
    // cout << *n << endl; // value print korba.

    // float *x = new float;
    // *x = 3.34567;

    // cout << fixed << setprecision(2) << *x << endl;
    cout << *x;
    return 0;
}