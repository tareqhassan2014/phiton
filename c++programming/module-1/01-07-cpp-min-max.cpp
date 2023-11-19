#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    // if (a > b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << b;
    // }
    // int mn = min(a, b);//input 2 ta hola.
    // int mx = max(a, b);
    int mn = min({a, b, c, d, e}); // input 2 tar basi hola.
    int mx = max({a, b, c, d, e});

    cout << mn << " " << mx;
}