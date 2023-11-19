#include <iostream>
#include <iomanip>
using namespace std;

int main()
{ // EOF in cpp
    // int a, b;
    // while (cin >> a >> b)
    // {
    //     cout << a << " " << b << endl;
    // }

    // setprecision in cpp.
    // setprecision use kora hoy 3.34256 number a point ar por 2/3 number naoar jonno.

    double a;
    cin >> a;
    // cout << a << endl;

    cout << fixed << setprecision(4) << a << endl;

    return 0;
}